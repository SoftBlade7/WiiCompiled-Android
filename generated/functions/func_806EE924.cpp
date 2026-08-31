#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EE924(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsux_806EEA6C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806EE924;

loc_806EE924:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    r5 = MemoryInline::FlatRead16((r3 + 6));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 64), 0, 10u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 64), f1.d);
    r0 = (r5 + -1);
}

loc_806EE948:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_806EE9CC;
    }
}

loc_806EE94C:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EE954:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806EE9CC;
    }
}

loc_806EE958:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 70), static_cast<uint16_t>(r4));
    r4 = (r5 + -1);
    r6 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 72), static_cast<uint16_t>(r4));
    r0 = (r0 * 56);
    r5 = MemoryInline::FlatRead32((r31 + 76));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 68), static_cast<uint8_t>(r6));
    r4 = r31;
    r3 = (r1 + 20);
    r5 = (r5 + r0);
    ctx->lr = 0x806EE990u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EF454u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    r0 = MemoryInline::FlatRead16((r31 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    r0 = (r0 * 56);
    r3 = MemoryInline::FlatRead32((r31 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
    goto loc_806EEA54;
}

loc_806EE9CC:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r5 = (r5 + 1);
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 70), static_cast<uint16_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_806EE9E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806EE9EC;
    }
}

loc_806EE9E4:
{
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 72), static_cast<uint16_t>(r5));
    goto loc_806EE9F4;
}

loc_806EE9EC:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 72), static_cast<uint16_t>(r0));
}

loc_806EE9F4:
{
    r0 = MemoryInline::FlatRead16((r31 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 68), static_cast<uint8_t>(r4));
    r4 = r31;
    r0 = (r0 * 56);
    r5 = MemoryInline::FlatRead32((r31 + 76));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 64));
    r3 = (r1 + 8);
    r5 = (r5 + r0);
    ctx->lr = 0x806EEA1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x806EF454u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    r0 = MemoryInline::FlatRead16((r31 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    r0 = (r0 * 56);
    r3 = MemoryInline::FlatRead32((r31 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
}

loc_806EEA54:
{
    r0 = MemoryInline::FlatRead16((r31 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r31 + 8));
    r3 = 1;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    addr_lfsux_806EEA6C_loc_0 = (r5 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsux_806EEA6C_loc_0);
    r5 = addr_lfsux_806EEA6C_loc_0;
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 20), 0, 88u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 24), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 2836));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 28), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r31 + 32), f2.d);
    f2.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r31 + 92), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r31 + 96), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r31 + 100), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r31 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 52), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 56), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r31 + 104), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 20), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 22), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 54u, (r31 + 74), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 23), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000003F gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806EE924 func_806EE924 preserves=true fpr_mask=0x00000000
