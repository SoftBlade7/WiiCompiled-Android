#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007AFC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8007AFC0;

loc_8007AFC0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r4;
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead32((r5 + 60));
    r3 = MemoryInline::FlatRead32((r5 + 56));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r31 = (r31_rot_0 & 15);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8007AFFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007B154;
    }
}

loc_8007B000:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r0 = (r0_rot_1 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8007B008:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8007B010;
    }
}

loc_8007B00C:
{
    goto loc_8007B154;
}

loc_8007B010:
{
    r0 = (r31 + 1);
    r3 = r5;
    r4 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80080D30u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 40));
    // inline leaf 0x800809A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x800809A0
    r0 = (r31 * 28);
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 28u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, r28);
            r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r28 + 4));
        }
    }
    r4 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r28 + 8));
    r7 = (r3 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r28 + 10));
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r7, r6);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r28 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r7 + 4), r5);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r28 + 16));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r7 + 8), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r28 + 20));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r7 + 10), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r28 + 22));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r7 + 12), f1.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r28 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r7 + 16), f0.d);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r7 + 20), r4);
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r7 + 22), r3);
    }
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r7 + 24), r0);
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_1 & 15);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80080DC0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r28 = 0;
    r29 = 1;
    r4 = 4;
    r0 = 60;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    // inline leaf 0x800809F0 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r5 = MemoryInline::FlatRead32((r3 + 64));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & 15);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 15);
    r4 = (r3 * 20);
    r3 = (r0 * 28);
    r0 = (r5 + r4);
    r3 = (r3 + r0);
    // end of inlined leaf 0x800809F0
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r4 = MemoryInline::FlatRead8((r1 + 12));
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r4));
    r3 = (r30 + 232);
    r4 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 40));
    r0 = MemoryInline::FlatRead32((r4 + 60));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_2 & 15);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80084480u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29152));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8007B104:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8007B11C;
    }
}

loc_8007B10C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8007B114:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8007B11C;
    }
}

loc_8007B118:
{
    r28 = r29;
}

loc_8007B11C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8007B120:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007B154;
    }
}

loc_8007B124:
{
    r4 = MemoryInline::FlatRead32((r30 + 40));
    r0 = MemoryInline::FlatRead32((r4 + 60));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8007B134:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8007B154;
    }
}

loc_8007B138:
{
    r3 = (r1 + 16);
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80082280u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_8007B154:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0002FFF gpr_write=0xF0000FFB gpr_return=0x00000018 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007AFC0 func_8007AFC0 preserves=true fpr_mask=0x00000000
