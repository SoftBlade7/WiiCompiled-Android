#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DA1B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_26 = 0;
    uint32_t r3_addr_27 = 0;
    uint32_t r3_addr_28 = 0;
    uint32_t r3_addr_29 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_30 = 0;
    uint32_t r3_addr_31 = 0;
    uint32_t r3_addr_32 = 0;
    uint32_t r3_addr_33 = 0;
    uint32_t r3_addr_34 = 0;
    uint32_t r3_addr_35 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;

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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801DA1B4;

loc_801DA1B4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
}

loc_801DA1CC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801DA1E4;
    }
}

loc_801DA1D0:
{
    r0 = (r4 & -2147483648);
}

loc_801DA1D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801DA1E4;
    }
}

loc_801DA1D8:
{
    r4 = (0 - r4);
    r30 = 1;
    goto loc_801DA1E8;
}

loc_801DA1E4:
{
    r30 = 0;
}

loc_801DA1E8:
{
    r31 = 0;
    r12 = 0;
    r7 = 0x80000000u;
    goto loc_801DA334;
}

loc_801DA1F8:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r27 = r3;
    r11 = 0;
    r0 = (r0 * r5);
    r0 = (r4 - r0);
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_801DA220;
}

loc_801DA218:
{
    r27 = (r27 + 1);
    r11 = (r11 + 1);
}

loc_801DA220:
{
    r29 = MemoryInline::FlatRead8(r27);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801DA218;
    }
}

loc_801DA22C:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_801DA230:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801DA314;
    }
}

loc_801DA234:
{
    r29 = (r11 + 1);
}

loc_801DA23C:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_801DA2F0;
    }
}

loc_801DA240:
{
    r28 = 0;
    r27 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801DA25C;
    }
}

loc_801DA24C:
{
    r29 = (r7 + 1);
}

loc_801DA254:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(r29))) {
        goto loc_801DA25C;
    }
}

loc_801DA258:
{
    r27 = 1;
}

loc_801DA25C:
{
}

loc_801DA260:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_801DA28C;
    }
}

loc_801DA264:
{
    r29 = (r11 & -2147483648);
}

loc_801DA268:
{
    r27 = 1;
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801DA280;
    }
}

loc_801DA270:
{
    r29 = (r11 + 1);
    r29 = (r29 & -2147483648);
}

loc_801DA278:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801DA280;
    }
}

loc_801DA27C:
{
    r27 = 0;
}

loc_801DA280:
{
}

loc_801DA284:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_801DA28C;
    }
}

loc_801DA288:
{
    r28 = 1;
}

loc_801DA28C:
{
}

loc_801DA290:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_801DA2F0;
    }
}

loc_801DA294:
{
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r29 = (r29_rot_2 & 536870911);
    ctr = r29;
}

loc_801DA2A0:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(8))) {
        goto loc_801DA2F0;
    }
}

loc_801DA2A4:
{
    r3_addr_3 = (r3 + r11);
    r29 = MemoryInline::FlatRead8(r3_addr_3);
    r27 = (r3 + r11);
    MemoryInline::FlatWrite8((r27 + 1), static_cast<uint8_t>(r29));
    r29 = MemoryInline::FlatRead8((r27 + -1));
    r3_addr_4 = (r3 + r11);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r29));
    r11 = (r11 + -8);
    r29 = MemoryInline::FlatRead8((r27 + -2));
    MemoryInline::FlatWrite8((r27 + -1), static_cast<uint8_t>(r29));
    r29 = MemoryInline::FlatRead8((r27 + -3));
    MemoryInline::FlatWrite8((r27 + -2), static_cast<uint8_t>(r29));
    r29 = MemoryInline::FlatRead8((r27 + -4));
    MemoryInline::FlatWrite8((r27 + -3), static_cast<uint8_t>(r29));
    r29 = MemoryInline::FlatRead8((r27 + -5));
    MemoryInline::FlatWrite8((r27 + -4), static_cast<uint8_t>(r29));
    r29 = MemoryInline::FlatRead8((r27 + -6));
    MemoryInline::FlatWrite8((r27 + -5), static_cast<uint8_t>(r29));
    r29 = MemoryInline::FlatRead8((r27 + -7));
    MemoryInline::FlatWrite8((r27 + -6), static_cast<uint8_t>(r29));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DA2A4;
    }
}

loc_801DA2F0:
{
    r29 = (r11 + 1);
    ctr = r29;
}

loc_801DA2FC:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(0))) {
        goto loc_801DA314;
    }
}

loc_801DA300:
{
    r3_addr_7 = (r3 + r11);
    r29 = MemoryInline::FlatRead8(r3_addr_7);
    r27 = (r3 + r11);
    r11 = (r11 + -1);
    MemoryInline::FlatWrite8((r27 + 1), static_cast<uint8_t>(r29));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DA300;
    }
}

loc_801DA314:
{
}

loc_801DA318:
{
    r11 = 48;
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(9))) {
        goto loc_801DA324;
    }
}

loc_801DA320:
{
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_801DA324:
{
    r0 = (r0 + r11);
    r12 = (r12 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r31 = (r31 + 1);
}

loc_801DA334:
{
}

loc_801DA338:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801DA1F8;
    }
}

loc_801DA33C:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DA464;
    }
}

loc_801DA348:
{
    r4 = r3;
    r5 = 0;
    goto loc_801DA35C;
}

loc_801DA354:
{
    r4 = (r4 + 1);
    r5 = (r5 + 1);
}

loc_801DA35C:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DA354;
    }
}

loc_801DA368:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801DA36C:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801DA454;
    }
}

loc_801DA370:
{
    r0 = (r5 + 1);
}

loc_801DA378:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_801DA430;
    }
}

loc_801DA37C:
{
    r6 = 0;
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801DA39C;
    }
}

loc_801DA388:
{
    r4 = 0x80000000u;
    r0 = (r4 + 1);
}

loc_801DA394:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_801DA39C;
    }
}

loc_801DA398:
{
    r7 = 1;
}

loc_801DA39C:
{
}

loc_801DA3A0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801DA3CC;
    }
}

loc_801DA3A4:
{
    r0 = (r5 & -2147483648);
}

loc_801DA3A8:
{
    r4 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DA3C0;
    }
}

loc_801DA3B0:
{
    r0 = (r5 + 1);
    r0 = (r0 & -2147483648);
}

loc_801DA3B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801DA3C0;
    }
}

loc_801DA3BC:
{
    r4 = 0;
}

loc_801DA3C0:
{
}

loc_801DA3C4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801DA3CC;
    }
}

loc_801DA3C8:
{
    r6 = 1;
}

loc_801DA3CC:
{
}

loc_801DA3D0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801DA430;
    }
}

loc_801DA3D4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_801DA3E0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(8))) {
        goto loc_801DA430;
    }
}

loc_801DA3E4:
{
    r3_addr_10 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_10);
    r4 = (r3 + r5);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + -1));
    r3_addr_11 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_11, static_cast<uint8_t>(r0));
    r5 = (r5 + -8);
    r0 = MemoryInline::FlatRead8((r4 + -2));
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + -3));
    MemoryInline::FlatWrite8((r4 + -2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + -4));
    MemoryInline::FlatWrite8((r4 + -3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + -5));
    MemoryInline::FlatWrite8((r4 + -4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + -6));
    MemoryInline::FlatWrite8((r4 + -5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + -7));
    MemoryInline::FlatWrite8((r4 + -6), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DA3E4;
    }
}

loc_801DA430:
{
    r0 = (r5 + 1);
    ctr = r0;
}

loc_801DA43C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_801DA454;
    }
}

loc_801DA440:
{
    r3_addr_14 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_14);
    r4 = (r3 + r5);
    r5 = (r5 + -1);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DA440;
    }
}

loc_801DA454:
{
    r0 = 48;
    r12 = (r12 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r31 = (r31 + 1);
}

loc_801DA464:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
}

loc_801DA46C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_801DA474;
    }
}

loc_801DA470:
{
    r9 = 32;
}

loc_801DA474:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    r31 = (r31 + r30);
    r10 = 0x80000000u;
    r4 = 32;
    r0 = 0;
    goto loc_801DA5DC;
}

loc_801DA48C:
{
}

loc_801DA490:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(76))) {
        goto loc_801DA4C8;
    }
}

loc_801DA494:
{
    r11 = r3;
    r7 = 0;
    goto loc_801DA4A8;
}

loc_801DA4A0:
{
    r11 = (r11 + 1);
    r7 = (r7 + 1);
}

loc_801DA4A8:
{
    r6 = MemoryInline::FlatRead8(r11);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_801DA4A0;
    }
}

loc_801DA4B4:
{
    r3_addr_18 = (r3 + r7);
    MemoryInline::FlatWrite8(r3_addr_18, static_cast<uint8_t>(r4));
    r6 = (r7 + 1);
    r12 = (r12 + 1);
    r3_addr_19 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_19, static_cast<uint8_t>(r0));
    goto loc_801DA5D8;
}

loc_801DA4C8:
{
    r11 = r3;
    r6 = 0;
    goto loc_801DA4DC;
}

loc_801DA4D4:
{
    r11 = (r11 + 1);
    r6 = (r6 + 1);
}

loc_801DA4DC:
{
    r7 = MemoryInline::FlatRead8(r11);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_801DA4D4;
    }
}

loc_801DA4E8:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801DA4EC:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801DA5D0;
    }
}

loc_801DA4F0:
{
    r7 = (r6 + 1);
}

loc_801DA4F8:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_801DA5AC;
    }
}

loc_801DA4FC:
{
    r11 = 0;
    r29 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801DA518;
    }
}

loc_801DA508:
{
    r7 = (r10 + 1);
}

loc_801DA510:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r7))) {
        goto loc_801DA518;
    }
}

loc_801DA514:
{
    r29 = 1;
}

loc_801DA518:
{
}

loc_801DA51C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801DA548;
    }
}

loc_801DA520:
{
    r7 = (r6 & -2147483648);
}

loc_801DA524:
{
    r29 = 1;
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_801DA53C;
    }
}

loc_801DA52C:
{
    r7 = (r6 + 1);
    r7 = (r7 & -2147483648);
}

loc_801DA534:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801DA53C;
    }
}

loc_801DA538:
{
    r29 = 0;
}

loc_801DA53C:
{
}

loc_801DA540:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801DA548;
    }
}

loc_801DA544:
{
    r11 = 1;
}

loc_801DA548:
{
}

loc_801DA54C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_801DA5AC;
    }
}

loc_801DA550:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r7 = (r7_rot_2 & 536870911);
    ctr = r7;
}

loc_801DA55C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(8))) {
        goto loc_801DA5AC;
    }
}

loc_801DA560:
{
    r3_addr_21 = (r3 + r6);
    r7 = MemoryInline::FlatRead8(r3_addr_21);
    r11 = (r3 + r6);
    MemoryInline::FlatWrite8((r11 + 1), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r11 + -1));
    r3_addr_22 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_22, static_cast<uint8_t>(r7));
    r6 = (r6 + -8);
    r7 = MemoryInline::FlatRead8((r11 + -2));
    MemoryInline::FlatWrite8((r11 + -1), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r11 + -3));
    MemoryInline::FlatWrite8((r11 + -2), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r11 + -4));
    MemoryInline::FlatWrite8((r11 + -3), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r11 + -5));
    MemoryInline::FlatWrite8((r11 + -4), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r11 + -6));
    MemoryInline::FlatWrite8((r11 + -5), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r11 + -7));
    MemoryInline::FlatWrite8((r11 + -6), static_cast<uint8_t>(r7));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DA560;
    }
}

loc_801DA5AC:
{
    r7 = (r6 + 1);
    ctr = r7;
}

loc_801DA5B8:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_801DA5D0;
    }
}

loc_801DA5BC:
{
    r3_addr_25 = (r3 + r6);
    r7 = MemoryInline::FlatRead8(r3_addr_25);
    r11 = (r3 + r6);
    r6 = (r6 + -1);
    MemoryInline::FlatWrite8((r11 + 1), static_cast<uint8_t>(r7));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DA5BC;
    }
}

loc_801DA5D0:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r9));
    r12 = (r12 + 1);
}

loc_801DA5D8:
{
    r31 = (r31 + 1);
}

loc_801DA5DC:
{
}

loc_801DA5E0:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r8))) {
        goto loc_801DA48C;
    }
}

loc_801DA5E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801DA5E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DA700;
    }
}

loc_801DA5EC:
{
    r4 = r3;
    r5 = 0;
    goto loc_801DA600;
}

loc_801DA5F8:
{
    r4 = (r4 + 1);
    r5 = (r5 + 1);
}

loc_801DA600:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DA5F8;
    }
}

loc_801DA60C:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801DA610:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801DA6F8;
    }
}

loc_801DA614:
{
    r0 = (r5 + 1);
}

loc_801DA61C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_801DA6D4;
    }
}

loc_801DA620:
{
    r6 = 0;
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801DA640;
    }
}

loc_801DA62C:
{
    r4 = 0x80000000u;
    r0 = (r4 + 1);
}

loc_801DA638:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_801DA640;
    }
}

loc_801DA63C:
{
    r7 = 1;
}

loc_801DA640:
{
}

loc_801DA644:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801DA670;
    }
}

loc_801DA648:
{
    r0 = (r5 & -2147483648);
}

loc_801DA64C:
{
    r4 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801DA664;
    }
}

loc_801DA654:
{
    r0 = (r5 + 1);
    r0 = (r0 & -2147483648);
}

loc_801DA65C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801DA664;
    }
}

loc_801DA660:
{
    r4 = 0;
}

loc_801DA664:
{
}

loc_801DA668:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801DA670;
    }
}

loc_801DA66C:
{
    r6 = 1;
}

loc_801DA670:
{
}

loc_801DA674:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801DA6D4;
    }
}

loc_801DA678:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 536870911);
    ctr = r0;
}

loc_801DA684:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(8))) {
        goto loc_801DA6D4;
    }
}

loc_801DA688:
{
    r3_addr_29 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_29);
    r4 = (r3 + r5);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + -1));
    r3_addr_30 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_30, static_cast<uint8_t>(r0));
    r5 = (r5 + -8);
    r0 = MemoryInline::FlatRead8((r4 + -2));
    MemoryInline::FlatWrite8((r4 + -1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + -3));
    MemoryInline::FlatWrite8((r4 + -2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + -4));
    MemoryInline::FlatWrite8((r4 + -3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + -5));
    MemoryInline::FlatWrite8((r4 + -4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + -6));
    MemoryInline::FlatWrite8((r4 + -5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + -7));
    MemoryInline::FlatWrite8((r4 + -6), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DA688;
    }
}

loc_801DA6D4:
{
    r0 = (r5 + 1);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801DA6E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DA6F8;
    }
}

loc_801DA6E4:
{
    r3_addr_33 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_33);
    r4 = (r3 + r5);
    r5 = (r5 + -1);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801DA6E4;
    }
}

loc_801DA6F8:
{
    r0 = 45;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_801DA700:
{
    r11 = (r1 + 32);
    r3 = r12;
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8001FFB gpr_write=0xF8001EFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DA1B4 func_801DA1B4 preserves=true fpr_mask=0x00000000
