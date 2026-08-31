#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F1208(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

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

    goto loc_801F1208;

loc_801F1208:
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
    r7 = 0;
    r8 = 0x80360000u;
    r0 = 13;
    r27 = r3;
    r28 = r4;
    r29 = r5;
    MemoryInline::FlatWrite32(r4, r7);
    r8 = (r8 + -23936);
    r30 = 0;
    r31 = 0;
    r9 = 0;
    ctr = r0;
}

loc_801F124C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 524280);
    r7 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 8));
}

loc_801F125C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F1280;
    }
}

loc_801F1260:
{
    r9 = (r9 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 524280);
    r7 = (r8 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 8));
}

loc_801F1274:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F1280;
    }
}

loc_801F1278:
{
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F124C;
    }
}

loc_801F1280:
{
    r0 = (r9 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
}

loc_801F1288:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801F1294;
    }
}

loc_801F128C:
{
    r3 = 8;
    goto loc_801F13D4;
}

loc_801F1294:
{
    r7 = 0x80360000u;
    r0 = 13;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r9));
    r7 = (r7 + -23936);
    r10 = 0;
    ctr = r0;
}

loc_801F12AC:
{
    r0 = (r10 & 65535);
    r0 = (r0 * 56);
    r6 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 420));
    r8 = (r6 + 420);
    r0 = (r0 & 1);
}

loc_801F12C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F12DC;
    }
}

loc_801F12C8:
{
}

loc_801F12CC:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801F1310;
    }
}

loc_801F12D0:
{
    r30 = r8;
    r31 = r10;
    goto loc_801F1310;
}

loc_801F12DC:
{
    r9 = MemoryInline::FlatRead32((r6 + 464));
    r0 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32(r9);
}

loc_801F12EC:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_801F1310;
    }
}

loc_801F12F0:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r9 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_801F12FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1310;
    }
}

loc_801F1300:
{
    MemoryInline::FlatWrite32(r4, r8);
    r3 = 0;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r10));
    goto loc_801F13D4;
}

loc_801F1310:
{
    r10 = (r10 + 1);
    r0 = (r10 & 65535);
    r0 = (r0 * 56);
    r6 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 420));
    r8 = (r6 + 420);
    r0 = (r0 & 1);
}

loc_801F132C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F1344;
    }
}

loc_801F1330:
{
}

loc_801F1334:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801F1378;
    }
}

loc_801F1338:
{
    r30 = r8;
    r31 = r10;
    goto loc_801F1378;
}

loc_801F1344:
{
    r9 = MemoryInline::FlatRead32((r6 + 464));
    r0 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32(r9);
}

loc_801F1354:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_801F1378;
    }
}

loc_801F1358:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r9 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_801F1364:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1378;
    }
}

loc_801F1368:
{
    MemoryInline::FlatWrite32(r4, r8);
    r3 = 0;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r10));
    goto loc_801F13D4;
}

loc_801F1378:
{
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F12AC;
    }
}

loc_801F1380:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801F1384:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1390;
    }
}

loc_801F1388:
{
    r3 = 8;
    goto loc_801F13D4;
}

loc_801F1390:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = (r30 + 4);
    r4 = MemoryInline::FlatRead32((r27 + 4));
    ctr = r12;
    ctx->lr = 0x801F13A4u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 44), r27);
    r5 = 0x80360000u;
    r5 = (r5 + -23936);
    r3 = 0;
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32(r30, r0);
    r4 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam16((r5 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32(r28, r30);
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r31));
}

loc_801F13D4:
{
    r11 = (r1 + 32);
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
    ctx->gpr[8] = r8;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F1208 func_801F1208 preserves=true fpr_mask=0x00000000
