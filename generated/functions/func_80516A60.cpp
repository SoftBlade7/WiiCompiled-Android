#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80516A60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80516A60;

loc_80516A60:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r9 = 0;
    r7 = MemoryInline::FlatRead32((r3 + 44));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r7));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r6 = (r6_rot_0 & 134217727);
    goto loc_80516B84;
}

loc_80516A78:
{
}

loc_80516A7C:
{
    r3 = (r9 & 65535);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80516A8C;
    }
}

loc_80516A84:
{
    r0 = MemoryInline::FlatRead16((r7 + 4));
    goto loc_80516A90;
}

loc_80516A8C:
{
    r0 = 0;
}

loc_80516A90:
{
}

loc_80516A94:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80516AC8;
    }
}

loc_80516A98:
{
    r0 = MemoryInline::FlatRead16((r7 + 4));
    r3 = (r9 & 65535);
}

loc_80516AA4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80516AC0;
    }
}

loc_80516AA8:
{
    r3 = MemoryInline::FlatRead32((r7 + 16));
}

loc_80516AB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80516AC0;
    }
}

loc_80516AB4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_80516ACC;
}

loc_80516AC0:
{
    r3 = 0;
    goto loc_80516ACC;
}

loc_80516AC8:
{
    r3 = 0;
}

loc_80516ACC:
{
    r8 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80516AD4:
{
    r3 = MemoryInline::FlatRead16((r8 + 40));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80516B80;
    }
}

loc_80516ADC:
{
    r0 = MemoryInline::FlatRead8((r8 + 1));
}

loc_80516AE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_80516B80;
    }
}

loc_80516AE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80516AEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80516B80;
    }
}

loc_80516AF0:
{
    r6 = 0x80890000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r8 + 4), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            f11.d = PpcBitCastToFloatInline(resolved_pair.second);
            f12.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r8 + 36));
            f12.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r8 + 32));
        }
    }
    r3 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r6 + -1416));
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r8 + 28));
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r8 + 8));
    f1.d = PpcFmulsInline(f0.d, f12.d);
    f4.d = PpcFmulsInline(f0.d, f13.d);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r8 + 4));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r8 + 12));
    f0.d = PpcFmulsInline(f0.d, f11.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f1.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r8 + 24));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r8 + 20));
        }
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r8 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f0.d));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r1 + 56), f7.d);
    MemoryInline::FlatWriteFloat32(r4, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f4.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 12), f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 28), f5.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f10.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f9.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 44), f10.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 48), f9.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 52), f8.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f13.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f12.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 32), f13.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 36), f12.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 40), f11.d);
    MemoryInline::FlatWriteFloat32(r5, f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
    goto loc_80516BA8;
}

loc_80516B80:
{
    r9 = (r9 + 1);
}

loc_80516B84:
{
}

loc_80516B88:
{
    r3 = (r9 & 65535);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80516B98;
    }
}

loc_80516B90:
{
    r0 = 0;
    goto loc_80516B9C;
}

loc_80516B98:
{
    r0 = MemoryInline::FlatRead16((r7 + 4));
}

loc_80516B9C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80516BA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80516A78;
    }
}

loc_80516BA4:
{
    r3 = 0;
}

loc_80516BA8:
{
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003BB gpr_write=0x000003CB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80516A60 func_80516A60 preserves=true fpr_mask=0x00000000
