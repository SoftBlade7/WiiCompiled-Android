#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066C66C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t xer = ctx->xer;

    goto loc_8066C66C;

loc_8066C66C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 1172832256;
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r12 = (r5 + -19853);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r10 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r12)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r8 = 274857984;
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r9 = 65536;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r11 = (static_cast<int32_t>(r10) >> 14);
    r30 = (r9 + -5536);
    r5 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 31u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
    r0 = (r8 + 19923);
    r8 = (static_cast<int32_t>(r10) >> 14);
    r9 = 1127219200;
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r10 = (r10_rot_0 & 1);
    MemoryInline::FlatWriteRam32((r1 + 8), r9);
    r8 = (r8 + r10);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    r8 = (r8 * r30);
    r31 = (r6 - r7);
    r11 = (r11 + r9);
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 12), static_cast<uint16_t>(r11));
    r10 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    r8 = (r6 - r8);
    r10 = 0x808A0000u;
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r31 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat64((r31 + -21976));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r31 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r10 + -21984));
    r9 = (static_cast<int32_t>(r8) >> 6);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 18), static_cast<uint8_t>(r5));
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & 1);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r3 + 30), static_cast<uint8_t>(r5));
    r9 = (r9 + r10);
    r11 = (static_cast<int32_t>(r8) >> 6);
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 14), static_cast<uint8_t>(r9));
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r12)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r10 = (static_cast<int32_t>(r8) >> 14);
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r12 = (r12_rot_0 & 1);
    r8 = (static_cast<int32_t>(r8) >> 14);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f0.d);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 1);
    r11 = (r11 + r12);
    r8 = (r8 + r9);
    r4 = (r4 + 12);
    r8 = (r8 * r30);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 1);
    r30 = r3;
    r5 = (r10 + r9);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 24), static_cast<uint16_t>(r5));
    r5 = 100;
    r8 = (r7 - r8);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r8 = (static_cast<int32_t>(r8) >> 6);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_3 & 1);
    r8 = (r8 + r9);
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r3 + 26), static_cast<uint8_t>(r8));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 6);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & 1);
    r0 = (r0 + r8);
    r8 = (r11 * 1000);
    r0 = (r0 * 1000);
    r6 = (r6 - r8);
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 16), static_cast<uint16_t>(r6));
    r0 = (r7 - r0);
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    r3 = (r3 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    xer = ctx->xer;
    r8 = MemoryInline::FlatRead8((r31 + 88));
    r3 = (r30 + 124);
    r7 = MemoryInline::FlatRead8((r31 + 89));
    r4 = (r31 + 92);
    r6 = MemoryInline::FlatRead8((r31 + 90));
    r5 = 100;
    r0 = MemoryInline::FlatRead8((r31 + 91));
    MemoryInline::FlatWrite32((r30 + 108), r8);
    MemoryInline::FlatWrite32((r30 + 112), r7);
    MemoryInline::FlatWrite32((r30 + 116), r6);
    MemoryInline::FlatWrite8((r30 + 120), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8066C66C func_8066C66C preserves=true fpr_mask=0x00000000
