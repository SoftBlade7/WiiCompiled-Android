#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80654150(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r0_subfc_min_4 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80654150;

loc_80654150:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = r3;
    ctx->lr = 0x8065416Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80654D08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x80654174u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806554A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x8065417Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80654038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80654180:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80654490;
    }
}

loc_80654184:
{
    r0 = MemoryInline::FlatRead16((r31 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8065418C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_806541A0;
    }
}

loc_80654190:
{
    r3 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    MemoryInline::FlatWrite8((r3 + 46), static_cast<uint8_t>(r0));
}

loc_806541A0:
{
    r0 = MemoryInline::FlatRead16((r31 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_806541A8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_806541EC;
    }
}

loc_806541AC:
{
    r3 = (r0 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r4 = 0x808A0000u;
    r3 = 0x80380000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -24184));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r0));
}

loc_806541EC:
{
    r0 = 6;
    r7 = 0;
    r6 = 0x809C0000u;
    r4 = 1;
    ctr = r0;
}

loc_80654200:
{
    r8 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = (r7 & 255);
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r5 = MemoryInline::FlatRead32((r8 + 10524));
    r0 = (r5 * 88);
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 72));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654280;
    }
}

loc_80654224:
{
    r0 = MemoryInline::FlatRead8((r5 + 89));
}

loc_8065422C:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_80654280;
    }
}

loc_80654230:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 8160);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r3 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 10144));
    r0 = (r0 * 48);
    r0 = (r8 + r0);
    r3 = (r0 + r5);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8065425C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654280;
    }
}

loc_80654260:
{
    r0 = MemoryInline::FlatRead16((r31 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8065426C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80654280;
    }
}

loc_80654270:
{
    r3 = MemoryInline::FlatRead16((r3 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80654278:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r3))) {
        goto loc_80654280;
    }
}

loc_8065427C:
{
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r3));
}

loc_80654280:
{
    r8 = MemoryInline::FlatRead32((r6 + 8408));
    r7 = (r7 + 1);
    r0 = (r7 & 255);
    r5 = MemoryInline::FlatRead32((r8 + 10524));
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 * 88);
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 72));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654304;
    }
}

loc_806542A8:
{
    r0 = MemoryInline::FlatRead8((r5 + 89));
}

loc_806542B0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_80654304;
    }
}

loc_806542B4:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & 8160);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r5 = (r5_rot_4 & 1020);
    r3 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 10144));
    r0 = (r0 * 48);
    r0 = (r8 + r0);
    r3 = (r0 + r5);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_806542E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654304;
    }
}

loc_806542E4:
{
    r0 = MemoryInline::FlatRead16((r31 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806542F0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80654304;
    }
}

loc_806542F4:
{
    r3 = MemoryInline::FlatRead16((r3 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_806542FC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r3))) {
        goto loc_80654304;
    }
}

loc_80654300:
{
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r3));
}

loc_80654304:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80654200;
    }
}

loc_8065430C:
{
    r3 = 0x809C0000u;
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_80654320:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80654348;
    }
}

loc_80654324:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 139));
}

loc_80654340:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80654348;
    }
}

loc_80654344:
{
    // inline leaf 0x806568F0 (6 guest instruction(s))
}

loc_inl2_0x806568F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 236));
}

loc_inl2_0x806568F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x806568FC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 236), r0);
    goto loc_inl2_cont_806568F0;
}

loc_inl2_return:
{
}

loc_inl2_cont_806568F0:
{
    // end of inlined leaf 0x806568F0
}

loc_80654348:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 232));
}

loc_80654358:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_80654364;
    }
}

loc_8065435C:
{
}

loc_80654360:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(4))) {
        goto loc_80654374;
    }
}

loc_80654364:
{
}

loc_80654368:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_806543D8;
    }
}

loc_8065436C:
{
}

loc_80654370:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_806543D8;
    }
}

loc_80654374:
{
    r0 = MemoryInline::FlatRead16((r31 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8065437C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_806543D8;
    }
}

loc_80654380:
{
    r27 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r27 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 139));
}

loc_8065439C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806543D8;
    }
}

loc_806543A0:
{
    r3 = 0x809C0000u;
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_2 = r0;
    r0 = (r0_subfc_min_2 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_2) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_2 = r3;
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_2);
    r3 = (r3 + r3_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_806543B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806543D8;
    }
}

loc_806543B8:
{
    r3 = MemoryInline::FlatRead32((r27 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 139));
}

loc_806543D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806543D8;
    }
}

loc_806543D4:
{
    // inline leaf 0x80656908 (6 guest instruction(s))
}

loc_inl4_0x80656908:
{
    r0 = MemoryInline::FlatRead32((r3 + 236));
}

loc_inl4_0x80656910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80656914:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 236), r0);
    goto loc_inl4_cont_80656908;
}

loc_inl4_return:
{
}

loc_inl4_cont_80656908:
{
    // end of inlined leaf 0x80656908
}

loc_806543D8:
{
    r0 = MemoryInline::FlatRead16((r31 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806543E0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80654404;
    }
}

loc_806543E4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8432));
    ctx->lr = 0x806543F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8065B730u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8440));
    ctx->lr = 0x806543FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8065C5E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x80654404u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80654B00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80654404:
{
    r31 = 0;
    r27 = 0x809C0000u;
    r28 = 1;
    r29 = 0x809C0000u;
    r30 = 0x809C0000u;
    goto loc_80654480;
}

loc_8065441C:
{
}

loc_80654420:
{
    r5 = MemoryInline::FlatRead32((r27 + 8408));
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(0))) {
        goto loc_8065443C;
    }
}

loc_80654428:
{
}

loc_8065442C:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(12))) {
        goto loc_8065443C;
    }
}

loc_80654430:
{
    r3 = (r5 + r31);
    r4 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80654440;
}

loc_8065443C:
{
    r4 = 255;
}

loc_80654440:
{
    r0 = MemoryInline::FlatRead32((r5 + 10544));
    r3 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r31));
    r0 = (r3 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80654470;
    }
}

loc_80654450:
{
    r3 = MemoryInline::FlatRead32((r27 + 8408));
    r4 = PPC_Slw(static_cast<uint32_t>(r28), static_cast<uint32_t>(r4));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065447C;
    }
}

loc_80654470:
{
    r3 = MemoryInline::FlatRead32((r29 + -10448));
    r4 = (r31 & 255);
    ctx->lr = 0x8065447Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80533D84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_8065447C:
{
    r31 = (r31 + 1);
}

loc_80654480:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8065448C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065441C;
    }
}

loc_80654490:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFC7FB gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80654150 func_80654150 preserves=true fpr_mask=0x00000000
