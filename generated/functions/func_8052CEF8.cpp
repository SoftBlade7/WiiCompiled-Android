#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052CEF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_8052CFDC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8052CEF8;

loc_8052CEF8:
{
    r5 = 0x80890000u;
    r0 = 9;
    r5 = (r5 + -160);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 12), 0, 36u, true, false);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r5 + 12));
    r3 = (r5 + 0);
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 28u, (r5 + 40));
    r6 = -2;
    f8.d = f10.d;
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 16));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 28));
    r4 = 1127219200;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 32));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.second);
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r5 + 24));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 20));
        }
    }
    ctr = r0;
}

loc_8052CF38:
{
}

loc_8052CF3C:
{
    r7 = r6;
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_8052CF48;
    }
}

loc_8052CF44:
{
    r7 = 0;
}

loc_8052CF48:
{
}

loc_8052CF4C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(4))) {
        goto loc_8052CF54;
    }
}

loc_8052CF50:
{
    r7 = 4;
}

loc_8052CF54:
{
    r0 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f11.d, f8.d);
}

loc_8052CF70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052CF78;
    }
}

loc_8052CF74:
{
    f11.d = (-(f11.d));
}

loc_8052CF78:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r5 + 12));
    SetCRFloatResident(cr, 0, f11.d, f5.d);
}

loc_8052CF80:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052CFD4;
    }
}

loc_8052CF88:
{
    SetCRFloatResident(cr, 0, f11.d, f7.d);
}

loc_8052CF8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8052CFB4;
    }
}

loc_8052CF90:
{
    f5.d = PpcFmulsInline(f6.d, f11.d);
    f0.d = PpcFmulsInline(f2.d, f11.d);
    f5.d = PpcFmulsInline(f5.d, f11.d);
    f0.d = PpcFmulsInline(f0.d, f11.d);
    f5.d = PpcFmulsInline(f11.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    goto loc_8052CFD4;
}

loc_8052CFB4:
{
    SetCRFloatResident(cr, 0, f11.d, f3.d);
}

loc_8052CFB8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052CFD4;
    }
}

loc_8052CFC0:
{
    f5.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f3.d));
    f0.d = (-(f5.d));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
}

loc_8052CFD4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    addr_lhax_8052CFDC_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_8052CFDC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6 = (r6 + 1);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052CF38;
    }
}

loc_8052D000:
{
    f1.d = f10.d;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FA gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000FFF fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052CEF8 func_8052CEF8 preserves=true fpr_mask=0x00000000
