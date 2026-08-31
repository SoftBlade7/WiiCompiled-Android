#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802007BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_802007BC;

loc_802007BC:
{
    MemoryInline::FlatWriteRam32((r1 + -1280), r1);
    r1 = (r1 + -1280);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1284), r0);
    r11 = (r1 + 1280);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 0;
    r28 = r3;
    r27 = r4;
    MemoryInline::FlatWrite32(r6, r31);
    r29 = r5;
    r30 = r6;
    r4 = r28;
    r5 = r27;
    r3 = (r1 + 104);
    ctx->lr = 0x802007F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F769Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802007FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200804;
    }
}

loc_80200800:
{
    goto loc_80200C60;
}

loc_80200804:
{
    r0 = MemoryInline::FlatRead8((r1 + 644));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020080C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200818;
    }
}

loc_80200810:
{
    r3 = 1;
    goto loc_80200C60;
}

loc_80200818:
{
    r3 = r27;
    r4 = (r1 + 24);
    r5 = (r1 + 36);
    ctx->lr = 0x80200828u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802035A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020082C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200838;
    }
}

loc_80200830:
{
    r3 = 1;
    goto loc_80200C60;
}

loc_80200838:
{
    r3 = (r1 + 36);
    r4 = 1;
    ctx->lr = 0x80200844u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801EF9BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r7 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(255));
}

loc_8020084C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80200858;
    }
}

loc_80200850:
{
    r3 = 1;
    goto loc_80200C60;
}

loc_80200858:
{
    r0 = (r29 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020085C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802008D0;
    }
}

loc_80200860:
{
    r5 = r28;
    r3 = (r1 + 48);
    r4 = (r1 + 16);
    r6 = (r1 + 668);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801FD6A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = (r1 + 48);
    r4 = (r1 + 680);
    r6 = (r1 + 36);
    r5 = 0;
    r7 = 103;
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x80200894u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F7738u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80200898:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802008A4;
    }
}

loc_8020089C:
{
    r3 = 3;
    goto loc_80200C60;
}

loc_802008A4:
{
    r0 = (r29 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802008A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802008C0;
    }
}

loc_802008AC:
{
    r0 = MemoryInline::FlatRead8((r1 + 1220));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802008B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802008C0;
    }
}

loc_802008B8:
{
    r3 = 10;
    goto loc_80200C60;
}

loc_802008C0:
{
    r3 = (r1 + 1226);
    r4 = (r1 + 8);
    ctx->lr = 0x802008CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F82C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80200A20;
}

loc_802008D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 664));
    r0 = (r7 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(259));
}

loc_802008DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802008E8;
    }
}

loc_802008E0:
{
    r3 = 1;
    goto loc_80200C60;
}

loc_802008E8:
{
    r3 = r28;
    r4 = (r1 + 680);
    r5 = (r1 + 36);
    r6 = (r1 + 104);
    ctx->lr = 0x802008FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802006A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80200900:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(8))) {
        goto loc_80200A14;
    }
}

loc_80200904:
{
    r0 = (r29 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200908:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200914;
    }
}

loc_8020090C:
{
    r3 = 8;
    goto loc_80200C60;
}

loc_80200914:
{
    r28 = (r29 & 1);
}

loc_80200918:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80200958;
    }
}

loc_8020091C:
{
    r3 = (r1 + 680);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r1)) + static_cast<uint64_t>(static_cast<uint32_t>(680)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80200920:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200930;
    }
}

loc_80200928:
{
    r0 = 0;
    goto loc_80200948;
}

loc_80200930:
{
    r4 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80201290u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_80200948:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020094C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200958;
    }
}

loc_80200950:
{
    r3 = 8;
    goto loc_80200C60;
}

loc_80200958:
{
    r3 = MemoryInline::FlatRead8((r1 + 1220));
    r0 = (r3 & 1);
}

loc_80200960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80200984;
    }
}

loc_80200964:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80200968:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020097C;
    }
}

loc_8020096C:
{
    r0 = (r29 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200970:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020097C;
    }
}

loc_80200974:
{
    r0 = (r29 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200978:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200984;
    }
}

loc_8020097C:
{
    r3 = 10;
    goto loc_80200C60;
}

loc_80200984:
{
    r0 = (r3 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200988:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200994;
    }
}

loc_8020098C:
{
    r3 = 23;
    goto loc_80200C60;
}

loc_80200994:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80200998:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200A04;
    }
}

loc_8020099C:
{
    r5 = MemoryInline::FlatRead32((r1 + 1236));
    r3 = (r1 + 48);
    r4 = (r1 + 16);
    r6 = (r1 + 1244);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801FD6A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r1 + 1244));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
}

loc_802009B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802009E0;
    }
}

loc_802009BC:
{
    r0 = (r4 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_802009C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802009E0;
    }
}

loc_802009C8:
{
    r6 = MemoryInline::FlatRead32((r1 + 1232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_802009D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802009E0;
    }
}

loc_802009D4:
{
    r3 = (r1 + 48);
    r5 = -1;
    ctx->lr = 0x802009E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801FC900u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_802009E0:
{
    r0 = 0;
    r3 = (r1 + 1230);
    MemoryInline::FlatWriteRam32((r1 + 1244), r0);
    r4 = (r1 + 1228);
    MemoryInline::FlatWriteRam32((r1 + 1232), r0);
    ctx->lr = 0x802009F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F82C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r1 + 1230));
    MemoryInline::FlatWriteRam16((r1 + 1226), static_cast<uint16_t>(r0));
    goto loc_80200A20;
}

loc_80200A04:
{
    r3 = (r1 + 1226);
    r4 = (r1 + 8);
    ctx->lr = 0x80200A10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F82C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80200A20;
}

loc_80200A14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80200A18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200A20;
    }
}

loc_80200A1C:
{
    goto loc_80200C60;
}

loc_80200A20:
{
    r28 = MemoryInline::FlatRead32((r1 + 1236));
    r4 = (r1 + 680);
    r3 = r28;
    ctx->lr = 0x80200A30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802004CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80200A34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200A40;
    }
}

loc_80200A38:
{
    r3 = 21;
    goto loc_80200C60;
}

loc_80200A40:
{
    r0 = 5;
    r5 = r28;
    r4 = 0;
    ctr = r0;
}

loc_80200A50:
{
    r0 = MemoryInline::FlatRead32((r5 + 3324));
    r0 = (r0 & 1);
}

loc_80200A58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80200A6C;
    }
}

loc_80200A5C:
{
    r0 = (r4 * 52);
    r4 = (r28 + r0);
    r31 = (r4 + 3324);
    goto loc_80200A7C;
}

loc_80200A6C:
{
    r5 = (r5 + 52);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80200A50;
    }
}

loc_80200A78:
{
    r31 = 0;
}

loc_80200A7C:
{
}

loc_80200A80:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80200AB4;
    }
}

loc_80200A84:
{
    r4 = MemoryInline::FlatRead16((r3 + 648));
    r4 = (r4 + -1);
    r0 = (r4 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200A90:
{
    MemoryInline::FlatWrite16((r3 + 648), static_cast<uint16_t>(r4));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200AAC;
    }
}

loc_80200A98:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = 0;
    r4 = (r4 & -2);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 28), r0);
}

loc_80200AAC:
{
    r3 = 22;
    goto loc_80200C60;
}

loc_80200AB4:
{
    MemoryInline::FlatWrite32((r31 + 8), r3);
    r3 = 536870912;
    r3 = (r3 + 1);
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r3);
    r3 = (r31 + 12);
    MemoryInline::FlatWrite32((r31 + 4), r29);
    MemoryInline::FlatWrite32((r31 + 28), r0);
    MemoryInline::FlatWrite16((r31 + 48), static_cast<uint16_t>(r0));
    // inline leaf 0x801FD630 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x801FD630
    r0 = -1;
}

loc_80200AE4:
{
    MemoryInline::FlatWrite32((r31 + 36), r0);
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80200AF4;
    }
}

loc_80200AEC:
{
    r4 = 0;
    goto loc_80200AFC;
}

loc_80200AF4:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_80200AFC:
{
    r3 = MemoryInline::FlatRead16(r4);
    r5 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r3 + -1);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r4 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r0 | r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    r0 = (r4 + r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80200B30;
    }
}

loc_80200B28:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 36), r0);
}

loc_80200B30:
{
    r0 = 0;
}

loc_80200B38:
{
    MemoryInline::FlatWrite32((r31 + 32), r0);
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80200B48;
    }
}

loc_80200B40:
{
    r5 = 0;
    goto loc_80200B50;
}

loc_80200B48:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r5 = MemoryInline::FlatRead32((r3 + 612));
}

loc_80200B50:
{
    r4 = MemoryInline::FlatRead32((r31 + 32));
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r5 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r4 = MemoryInline::FlatRead16(r5);
    r5 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r4 + -1);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    // inline leaf 0x801F62C4 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    // end of inlined leaf 0x801F62C4
    r0 = (r29 & 1);
}

loc_80200B80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80200BA0;
    }
}

loc_80200B84:
{
    r0 = MemoryInline::FlatRead32((r28 + 5584));
    r0 = (r0 & 1);
}

loc_80200B8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80200BA0;
    }
}

loc_80200B90:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80200BA0:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80200BA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80200C58;
    }
}

loc_80200BAC:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
}

loc_80200BB4:
{
    r8 = MemoryInline::FlatRead32((r3 + 608));
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80200BC4;
    }
}

loc_80200BBC:
{
    r4 = 0;
    goto loc_80200BC8;
}

loc_80200BC4:
{
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_80200BC8:
{
    r3 = MemoryInline::FlatRead16(r4);
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r3 = (r3 + -1);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    r7 = (r0 & r3);
    r5 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r8 & r3);
    r6 = (0 - r7);
    r4 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r4));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r6 = (r6 | r7);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
}

loc_80200C0C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80200C18;
    }
}

loc_80200C10:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 36), r0);
}

loc_80200C18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80200C1C:
{
    MemoryInline::FlatWrite32((r31 + 32), r8);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80200C2C;
    }
}

loc_80200C24:
{
    r4 = 0;
    goto loc_80200C34;
}

loc_80200C2C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 612));
}

loc_80200C34:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r0 = MemoryInline::FlatRead8((r4 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32((r31 + 40), r0);
    r3 = MemoryInline::FlatRead16(r4);
    r4 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r3 + -1);
    r0 = (r4 & r0);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
}

loc_80200C58:
{
    MemoryInline::FlatWrite32(r30, r31);
    r3 = 0;
}

loc_80200C60:
{
    r11 = (r1 + 1280);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 1284));
    ctx->lr = r0;
    r1 = (r1 + 1280);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802007BC func_802007BC preserves=true fpr_mask=0x00000000
