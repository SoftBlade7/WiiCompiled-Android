#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F82A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
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
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800F82A0;

loc_800F82A0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r31 = r6;
    r29 = r4;
    r28 = r3;
    r30 = r5;
    r4 = r31;
}

loc_800F82C8:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
}

loc_800F82D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F82C8;
    }
}

loc_800F82D8:
{
    r4 = (r4 - r6);
    r5 = r31;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r4);
    r4 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r4 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_800F82F0:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_800F8354;
    }
}

loc_800F82F8:
{
    r0 = MemoryInline::FlatRead16(r5);
}

loc_800F8300:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(32))) {
        goto loc_800F8324;
    }
}

loc_800F8304:
{
}

loc_800F8308:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9))) {
        goto loc_800F834C;
    }
}

loc_800F830C:
{
}

loc_800F8310:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_800F834C;
    }
}

loc_800F8314:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
}

loc_800F8318:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F834C;
    }
}

loc_800F831C:
{
    r3 = 0;
    goto loc_800F8A24;
}

loc_800F8324:
{
}

loc_800F8328:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(55295))) {
        goto loc_800F833C;
    }
}

loc_800F832C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(57344));
}

loc_800F8330:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F833C;
    }
}

loc_800F8334:
{
    r3 = 0;
    goto loc_800F8A24;
}

loc_800F833C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65533));
}

loc_800F8340:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F834C;
    }
}

loc_800F8344:
{
    r3 = 0;
    goto loc_800F8A24;
}

loc_800F834C:
{
    r5 = (r5 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F82F8;
    }
}

loc_800F8354:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_800F8360:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F83AC;
    }
}

loc_800F8364:
{
    r26 = (r4 + 1024);
    r3 = MemoryInline::FlatRead32(r3);
    r4 = r26;
    ctx->lr = 0x800F8374u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F8378:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8384;
    }
}

loc_800F837C:
{
    r0 = 0;
    goto loc_800F839C;
}

loc_800F8384:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F838C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8394;
    }
}

loc_800F8390:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F8394:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F839C:
{
}

loc_800F83A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F83AC;
    }
}

loc_800F83A4:
{
    r5 = 0;
    goto loc_800F83CC;
}

loc_800F83AC:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 60;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F83CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F83D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F861C;
    }
}

loc_800F83D4:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F83E0:
{
    r26 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F843C;
    }
}

loc_800F83E8:
{
    r3 = 1;
    goto loc_800F8470;
}

loc_800F83F4:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r27;
    ctx->lr = 0x800F8404u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F8408:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8414;
    }
}

loc_800F840C:
{
    r0 = 0;
    goto loc_800F842C;
}

loc_800F8414:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F841C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8424;
    }
}

loc_800F8420:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F8424:
{
    MemoryInline::FlatWrite32((r28 + 8), r27);
    r0 = 1;
}

loc_800F842C:
{
}

loc_800F8430:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F843C;
    }
}

loc_800F8434:
{
    r3 = 0;
    goto loc_800F8470;
}

loc_800F843C:
{
    r5 = MemoryInline::FlatRead32((r28 + 4));
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r26));
}

loc_800F844C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F83F4;
    }
}

loc_800F8450:
{
    r0 = MemoryInline::FlatRead32(r28);
    r4 = r29;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = 1;
    r0 = (r0 + r26);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F8470:
{
}

loc_800F8474:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F861C;
    }
}

loc_800F8478:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F8484:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F84D0;
    }
}

loc_800F8488:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r26;
    ctx->lr = 0x800F8498u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F849C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F84A8;
    }
}

loc_800F84A0:
{
    r0 = 0;
    goto loc_800F84C0;
}

loc_800F84A8:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F84B0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F84B8;
    }
}

loc_800F84B4:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F84B8:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F84C0:
{
}

loc_800F84C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F84D0;
    }
}

loc_800F84C8:
{
    r5 = 0;
    goto loc_800F84F0;
}

loc_800F84D0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F84F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F84F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F861C;
    }
}

loc_800F84F8:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F8504:
{
    r26 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8560;
    }
}

loc_800F850C:
{
    r3 = 1;
    goto loc_800F8594;
}

loc_800F8518:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r27;
    ctx->lr = 0x800F8528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F852C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8538;
    }
}

loc_800F8530:
{
    r0 = 0;
    goto loc_800F8550;
}

loc_800F8538:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F8540:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8548;
    }
}

loc_800F8544:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F8548:
{
    MemoryInline::FlatWrite32((r28 + 8), r27);
    r0 = 1;
}

loc_800F8550:
{
}

loc_800F8554:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8560;
    }
}

loc_800F8558:
{
    r3 = 0;
    goto loc_800F8594;
}

loc_800F8560:
{
    r5 = MemoryInline::FlatRead32((r28 + 4));
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r26));
}

loc_800F8570:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F8518;
    }
}

loc_800F8574:
{
    r0 = MemoryInline::FlatRead32(r28);
    r4 = r30;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = 1;
    r0 = (r0 + r26);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F8594:
{
}

loc_800F8598:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F861C;
    }
}

loc_800F859C:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F85A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F85F4;
    }
}

loc_800F85AC:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r26;
    ctx->lr = 0x800F85BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F85C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F85CC;
    }
}

loc_800F85C4:
{
    r0 = 0;
    goto loc_800F85E4;
}

loc_800F85CC:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F85D4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F85DC;
    }
}

loc_800F85D8:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F85DC:
{
    MemoryInline::FlatWrite32((r28 + 8), r26);
    r0 = 1;
}

loc_800F85E4:
{
}

loc_800F85E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F85F4;
    }
}

loc_800F85EC:
{
    r5 = 0;
    goto loc_800F8614;
}

loc_800F85F4:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F8614:
{
}

loc_800F8618:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800F8624;
    }
}

loc_800F861C:
{
    r0 = 0;
    goto loc_800F8628;
}

loc_800F8624:
{
    r0 = 1;
}

loc_800F8628:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F862C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F8A18;
    }
}

loc_800F8630:
{
    r0 = 0;
    r3 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_800F863C:
{
    r0 = MemoryInline::FlatRead16(r3);
    r3 = (r3 + 2);
}

loc_800F8648:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F863C;
    }
}

loc_800F864C:
{
    r3 = (r3 - r31);
    r26 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r26));
    r0 = (r0 + r3);
    r27 = (r1 + 8);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 1);
    r25 = 0;
    r24 = (r3 + -1);
    goto loc_800F86A8;
}

loc_800F8674:
{
    r3 = MemoryInline::FlatRead16(r31);
    r4 = (r1 + 8);
    // inline leaf 0x800F4680 (26 guest instruction(s))
}

loc_inl1_0x800F4680:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(127));
}

loc_inl1_0x800F4684:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl1_0x800F4694;
    }
}

loc_inl1_0x800F4688:
{
    MemoryInline::FlatWriteRam8(r4, static_cast<uint8_t>(r3));
    r3 = 1;
    goto loc_inl1_cont_800F4680;
}

loc_inl1_0x800F4694:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2047));
}

loc_inl1_0x800F4698:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl1_0x800F46BC;
    }
}

loc_inl1_0x800F469C:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r5 = (r5_rot_2 & 1023);
    r0 = (r3 & 63);
    r5 = (r5 | 192);
    r3 = 2;
    r0 = (r0 | 128);
    MemoryInline::FlatWriteRam8(r4, static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r4 + 1), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_800F4680;
}

loc_inl1_0x800F46BC:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
    r6 = (r6_rot_2 & 15);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r5 = (r5_rot_3 & 63);
    r0 = (r3 & 63);
    r3 = 3;
    r6 = (r6 | 224);
    r5 = (r5 | 128);
    r0 = (r0 | 128);
    MemoryInline::FlatWriteRam8(r4, static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r4 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r4 + 2), static_cast<uint8_t>(r0));
}

loc_inl1_cont_800F4680:
{
    // end of inlined leaf 0x800F4680
    r27_addr_2 = (r27 + r3);
    MemoryInline::FlatWrite8(r27_addr_2, static_cast<uint8_t>(r26));
    r3 = r28;
    r4 = r27;
    ctx->lr = 0x800F8690u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800FA774u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F8694:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F86A0;
    }
}

loc_800F8698:
{
    r0 = 0;
    goto loc_800F86B4;
}

loc_800F86A0:
{
    r31 = (r31 + 2);
    r25 = (r25 + 1);
}

loc_800F86A8:
{
}

loc_800F86AC:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r24))) {
        goto loc_800F8674;
    }
}

loc_800F86B0:
{
    r0 = 1;
}

loc_800F86B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F86B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F8A18;
    }
}

loc_800F86BC:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F86C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F8714;
    }
}

loc_800F86CC:
{
    r24 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r24;
    ctx->lr = 0x800F86DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F86E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F86EC;
    }
}

loc_800F86E4:
{
    r0 = 0;
    goto loc_800F8704;
}

loc_800F86EC:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F86F4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F86FC;
    }
}

loc_800F86F8:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F86FC:
{
    MemoryInline::FlatWrite32((r28 + 8), r24);
    r0 = 1;
}

loc_800F8704:
{
}

loc_800F8708:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8714;
    }
}

loc_800F870C:
{
    r5 = 0;
    goto loc_800F8734;
}

loc_800F8714:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 60;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_9 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_9, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F8734:
{
}

loc_800F8738:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800F8A04;
    }
}

loc_800F873C:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F8748:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F8794;
    }
}

loc_800F874C:
{
    r24 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r24;
    ctx->lr = 0x800F875Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F8760:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F876C;
    }
}

loc_800F8764:
{
    r0 = 0;
    goto loc_800F8784;
}

loc_800F876C:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F8774:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F877C;
    }
}

loc_800F8778:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F877C:
{
    MemoryInline::FlatWrite32((r28 + 8), r24);
    r0 = 1;
}

loc_800F8784:
{
}

loc_800F8788:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8794;
    }
}

loc_800F878C:
{
    r5 = 0;
    goto loc_800F87B4;
}

loc_800F8794:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 47;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_11 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_11, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F87B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F87B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F8A04;
    }
}

loc_800F87BC:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F87C8:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8824;
    }
}

loc_800F87D0:
{
    r3 = 1;
    goto loc_800F8858;
}

loc_800F87DC:
{
    r24 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r24;
    ctx->lr = 0x800F87ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F87F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F87FC;
    }
}

loc_800F87F4:
{
    r0 = 0;
    goto loc_800F8814;
}

loc_800F87FC:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F8804:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F880C;
    }
}

loc_800F8808:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F880C:
{
    MemoryInline::FlatWrite32((r28 + 8), r24);
    r0 = 1;
}

loc_800F8814:
{
}

loc_800F8818:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8824;
    }
}

loc_800F881C:
{
    r3 = 0;
    goto loc_800F8858;
}

loc_800F8824:
{
    r5 = MemoryInline::FlatRead32((r28 + 4));
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r31));
}

loc_800F8834:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F87DC;
    }
}

loc_800F8838:
{
    r0 = MemoryInline::FlatRead32(r28);
    r4 = r29;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = 1;
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F8858:
{
}

loc_800F885C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F8A04;
    }
}

loc_800F8860:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F886C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F88B8;
    }
}

loc_800F8870:
{
    r24 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r24;
    ctx->lr = 0x800F8880u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F8884:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8890;
    }
}

loc_800F8888:
{
    r0 = 0;
    goto loc_800F88A8;
}

loc_800F8890:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F8898:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F88A0;
    }
}

loc_800F889C:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F88A0:
{
    MemoryInline::FlatWrite32((r28 + 8), r24);
    r0 = 1;
}

loc_800F88A8:
{
}

loc_800F88AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F88B8;
    }
}

loc_800F88B0:
{
    r5 = 0;
    goto loc_800F88D8;
}

loc_800F88B8:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_13 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_13, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F88D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F88DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F8A04;
    }
}

loc_800F88E0:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F88EC:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8948;
    }
}

loc_800F88F4:
{
    r3 = 1;
    goto loc_800F897C;
}

loc_800F8900:
{
    r24 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r24;
    ctx->lr = 0x800F8910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F8914:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F8920;
    }
}

loc_800F8918:
{
    r0 = 0;
    goto loc_800F8938;
}

loc_800F8920:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F8928:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F8930;
    }
}

loc_800F892C:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F8930:
{
    MemoryInline::FlatWrite32((r28 + 8), r24);
    r0 = 1;
}

loc_800F8938:
{
}

loc_800F893C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F8948;
    }
}

loc_800F8940:
{
    r3 = 0;
    goto loc_800F897C;
}

loc_800F8948:
{
    r5 = MemoryInline::FlatRead32((r28 + 4));
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r29));
}

loc_800F8958:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F8900;
    }
}

loc_800F895C:
{
    r0 = MemoryInline::FlatRead32(r28);
    r4 = r30;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = 1;
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F897C:
{
}

loc_800F8980:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F8A04;
    }
}

loc_800F8984:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F8990:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F89DC;
    }
}

loc_800F8994:
{
    r24 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = r24;
    ctx->lr = 0x800F89A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800F89A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F89B4;
    }
}

loc_800F89AC:
{
    r0 = 0;
    goto loc_800F89CC;
}

loc_800F89B4:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_800F89BC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F89C4;
    }
}

loc_800F89C0:
{
    MemoryInline::FlatWrite32(r28, r3);
}

loc_800F89C4:
{
    MemoryInline::FlatWrite32((r28 + 8), r24);
    r0 = 1;
}

loc_800F89CC:
{
}

loc_800F89D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F89DC;
    }
}

loc_800F89D4:
{
    r5 = 0;
    goto loc_800F89FC;
}

loc_800F89DC:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r5 = 1;
    r3_addr_15 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_15, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_800F89FC:
{
}

loc_800F8A00:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800F8A0C;
    }
}

loc_800F8A04:
{
    r0 = 0;
    goto loc_800F8A10;
}

loc_800F8A0C:
{
    r0 = 1;
}

loc_800F8A10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F8A14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F8A20;
    }
}

loc_800F8A18:
{
    r3 = 0;
    goto loc_800F8A24;
}

loc_800F8A20:
{
    r3 = 1;
}

loc_800F8A24:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F82A0 func_800F82A0 preserves=true fpr_mask=0x00000000
