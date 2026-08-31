#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80217ADC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
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
    uint32_t xer = ctx->xer;

    goto loc_80217ADC;

loc_80217ADC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 100u, (r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 80u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 84u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 92u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r12 = (r6 + 1);
    r0 = 1127219200;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80217AFC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r25 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80217C30;
    }
}

loc_80217B0C:
{
}

loc_80217B10:
{
    r11 = (r6 + -7);
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(8))) {
        goto loc_80217BF0;
    }
}

loc_80217B18:
{
    r26 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80217B34;
    }
}

loc_80217B20:
{
    r10 = 0x80000000u;
    r0 = (r10 + -2);
}

loc_80217B2C:
{
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(r0))) {
        goto loc_80217B34;
    }
}

loc_80217B30:
{
    r26 = 1;
}

loc_80217B34:
{
}

loc_80217B38:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80217BF0;
    }
}

loc_80217B3C:
{
    r0 = (r11 + 7);
    r26 = r4;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_80217B50:
{
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(0))) {
        goto loc_80217BF0;
    }
}

loc_80217B54:
{
    r29 = MemoryInline::FlatRead8(r8);
    r25 = (r25 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r26, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r26, static_cast<uint8_t>(r29));
    r11 = MemoryInline::FlatRead8((r8 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r26 + 1), static_cast<uint8_t>(r11));
    r10 = MemoryInline::FlatRead8((r8 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r26 + 2), static_cast<uint8_t>(r10));
    r0 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r26 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r26 + 4), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r26 + 5), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r26 + 6), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r26 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r26 + 8), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r26 + 9), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r26 + 10), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r26 + 11), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r26 + 12), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r26 + 13), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r26 + 14), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r26 + 15), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r26 + 16), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r26 + 17), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r26 + 18), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r26 + 19), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r26 + 20), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r26 + 21), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r26 + 22), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r26 + 23), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r26 + 24), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r26 + 25), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r26 + 26), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r26 + 27), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r26 + 28), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r26 + 29), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r26 + 30), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r26 + 31), static_cast<uint8_t>(r0));
    r26 = (r26 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80217B54;
    }
}

loc_80217BF0:
{
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r10 = (r10_rot_1 & -4);
    r0 = (r12 - r25);
    r10 = (r4 + r10);
    ctr = r0;
}

loc_80217C04:
{
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(r12))) {
        goto loc_80217C30;
    }
}

loc_80217C08:
{
    r0 = MemoryInline::FlatRead8(r8);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 1));
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 2));
    MemoryInline::FlatWrite8((r10 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::FlatWrite8((r10 + 3), static_cast<uint8_t>(r0));
    r10 = (r10 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80217C08;
    }
}

loc_80217C30:
{
    r10 = (r7 + -1);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r10), static_cast<int32_t>(r5));
}

loc_80217C38:
{
    r11 = r10;
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80217DEC;
    }
}

loc_80217C40:
{
    r25 = (r5 - r10);
    r30 = (r5 + -8);
}

loc_80217C4C:
{
    if ((static_cast<int32_t>(r25) <= static_cast<int32_t>(8))) {
        goto loc_80217DAC;
    }
}

loc_80217C50:
{
    r31 = 0;
    r28 = 0;
    r27 = 0;
    r26 = 0;
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80217C78;
    }
}

loc_80217C64:
{
    r29 = 0x80000000u;
    r0 = (r29 + -2);
}

loc_80217C70:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_80217C78;
    }
}

loc_80217C74:
{
    r26 = 1;
}

loc_80217C78:
{
}

loc_80217C7C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80217C94;
    }
}

loc_80217C80:
{
    r29 = 0x80000000u;
    r0 = (r29 + -2);
}

loc_80217C8C:
{
    if ((static_cast<int32_t>(r10) > static_cast<int32_t>(r0))) {
        goto loc_80217C94;
    }
}

loc_80217C90:
{
    r27 = 1;
}

loc_80217C94:
{
}

loc_80217C98:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80217CAC;
    }
}

loc_80217C9C:
{
    r0 = (r10 + -2147483648);
}

loc_80217CA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80217CAC;
    }
}

loc_80217CA8:
{
    r28 = 1;
}

loc_80217CAC:
{
}

loc_80217CB0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80217CE8;
    }
}

loc_80217CB4:
{
    r0 = (0 - r10);
    r27 = (r5 & -2147483648);
    r0 = (r0 & -2147483648);
    r26 = 1;
}

loc_80217CC8:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(r0))) {
        goto loc_80217CDC;
    }
}

loc_80217CCC:
{
    r0 = (r25 & -2147483648);
}

loc_80217CD4:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(r0))) {
        goto loc_80217CDC;
    }
}

loc_80217CD8:
{
    r26 = 0;
}

loc_80217CDC:
{
}

loc_80217CE0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80217CE8;
    }
}

loc_80217CE4:
{
    r31 = 1;
}

loc_80217CE8:
{
}

loc_80217CEC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80217DAC;
    }
}

loc_80217CF0:
{
    r0 = (r30 + 7);
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r29 = (r29_rot_1 & -4);
    r0 = (r0 - r10);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    r26 = (r4 + r29);
    ctr = r0;
}

loc_80217D0C:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r30))) {
        goto loc_80217DAC;
    }
}

loc_80217D10:
{
    r29 = MemoryInline::FlatRead8(r9);
    r11 = (r11 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r26, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r26, static_cast<uint8_t>(r29));
    r30 = MemoryInline::FlatRead8((r9 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r26 + 1), static_cast<uint8_t>(r30));
    r31 = MemoryInline::FlatRead8((r9 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r26 + 2), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead8((r9 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r26 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r26 + 4), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r26 + 5), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r26 + 6), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r26 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r26 + 8), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r26 + 9), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r26 + 10), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r26 + 11), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r26 + 12), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r26 + 13), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r26 + 14), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r26 + 15), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r26 + 16), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r26 + 17), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r26 + 18), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r26 + 19), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r26 + 20), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r26 + 21), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r26 + 22), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r26 + 23), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r26 + 24), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r26 + 25), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r26 + 26), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r26 + 27), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r26 + 28), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r26 + 29), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r26 + 30), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r26 + 31), static_cast<uint8_t>(r0));
    r26 = (r26 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80217D10;
    }
}

loc_80217DAC:
{
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r31 = (r31_rot_1 & -4);
    r0 = (r5 - r11);
    r26 = (r4 + r31);
    ctr = r0;
}

loc_80217DC0:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(r5))) {
        goto loc_80217DEC;
    }
}

loc_80217DC4:
{
    r0 = MemoryInline::FlatRead8(r9);
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r9 + 1));
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r9 + 2));
    MemoryInline::FlatWrite8((r26 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r9 + 3));
    MemoryInline::FlatWrite8((r26 + 3), static_cast<uint8_t>(r0));
    r26 = (r26 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80217DC4;
    }
}

loc_80217DEC:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r7 = (r7 - r6);
    r4 = (r4 + r0);
    r5 = (r10 - r12);
    r0 = (r7 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -25752));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25764));
    f10.d = MemoryInline::FlatReadFloat32((r2 + -25768));
    f9.d = MemoryInline::FlatReadFloat64((r2 + -25760));
    ctr = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r10));
}

loc_80217E18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80218044;
    }
}

loc_80217E1C:
{
    r5 = (r12 - r6);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 ^ -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80217E2C:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80217E74;
    }
}

loc_80217E48:
{
}

loc_80217E4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80217E7C;
    }
}

loc_80217E50:
{
}

loc_80217E54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80217E88;
    }
}

loc_80217E58:
{
}

loc_80217E5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_80217E98;
    }
}

loc_80217E60:
{
}

loc_80217E64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_80217EAC;
    }
}

loc_80217E68:
{
}

loc_80217E6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(6))) {
        goto loc_80217EC0;
    }
}

loc_80217E70:
{
    goto loc_80217ED8;
}

loc_80217E74:
{
    f11.d = PpcFmulsInline(f11.d, f11.d);
    goto loc_80217ED8;
}

loc_80217E7C:
{
    f11.d = PpcFmulsInline(f11.d, f11.d);
    f11.d = PpcFmulsInline(f11.d, f11.d);
    goto loc_80217ED8;
}

loc_80217E88:
{
    f11.d = PpcFmulsInline(f11.d, f11.d);
    f11.d = PpcFmulsInline(f11.d, f11.d);
    f11.d = PpcFmulsInline(f11.d, f11.d);
    goto loc_80217ED8;
}

loc_80217E98:
{
    f11.d = PpcFmulsInline(f11.d, f11.d);
    f11.d = PpcFmulsInline(f11.d, f11.d);
    f11.d = PpcFmulsInline(f11.d, f11.d);
    f11.d = PpcFmulsInline(f11.d, f11.d);
    goto loc_80217ED8;
}

loc_80217EAC:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f0.d));
    f2.d = (-(f3.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    goto loc_80217ED8;
}

loc_80217EC0:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f0.d));
    f2.d = (-(f3.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
}

loc_80217ED8:
{
    SetCRFloatResident(cr, 0, f11.d, f10.d);
}

loc_80217EDC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80217F08;
    }
}

loc_80217EE4:
{
    r5 = MemoryInline::FlatRead8(r8);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r8 + 1));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r8 + 2));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r5));
    goto loc_80218038;
}

loc_80217F08:
{
    SetCRFloatResident(cr, 0, f11.d, f0.d);
}

loc_80217F0C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80217F38;
    }
}

loc_80217F14:
{
    r5 = MemoryInline::FlatRead8(r9);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r9 + 1));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r9 + 2));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r9 + 3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r5));
    goto loc_80218038;
}

loc_80217F38:
{
    r7 = MemoryInline::FlatRead8(r8);
    r5 = MemoryInline::FlatRead8(r9);
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    r5 = (r5 - r7);
    r7 = MemoryInline::FlatRead8((r8 + 1));
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    r5 = MemoryInline::FlatRead8((r9 + 1));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r5 = (r5 - r7);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    r10 = MemoryInline::FlatRead8((r8 + 2));
    r5 = MemoryInline::FlatRead8((r9 + 2));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r5 = (r5 - r10);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    r7 = MemoryInline::FlatRead8((r8 + 3));
    r5 = MemoryInline::FlatRead8((r9 + 3));
    f5.d = PpcFmulsInline(f11.d, f5.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    r5 = (r5 - r7);
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    r5 = (r5 ^ -2147483648);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f6.d = PpcFmulsInline(f11.d, f4.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f5.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = PpcFmulsInline(f11.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f7.d = PPC_Fctiwz(f8.d);
    f5.d = PPC_Fctiwz(f6.d);
    fctiwzword0 = PPC_FprLowWordInline(f7.d);
    f4.d = PPC_Fctiwz(f4.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f9.d));
    f2.d = PpcFmulsInline(f11.d, f2.d);
    r5 = fctiwzword0;
    fctiwzword1 = PPC_FprLowWordInline(f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r5 = fctiwzword1;
    fctiwzword2 = PPC_FprLowWordInline(f4.d);
    f2.d = PPC_Fctiwz(f2.d);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r5));
    r5 = fctiwzword2;
    fctiwzword3 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r5));
    r5 = fctiwzword3;
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r5));
}

loc_80218038:
{
    r4 = (r4 + 4);
    r12 = (r12 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80217E1C;
    }
}

loc_80218044:
{
    r11 = (r1 + 96);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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

// RECOMP_GUEST_ABI gpr_read=0xFE001FFF gpr_write=0xFE001CB3 gpr_return=0x00000010 fpr_read=0x00000FFF fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80217ADC func_80217ADC preserves=true fpr_mask=0x00000000
