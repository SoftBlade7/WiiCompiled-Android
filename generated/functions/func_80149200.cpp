#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80149200(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_80149200;

loc_80149200:
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
    r5 = 0x80340000u;
    r0 = 4;
    r27 = r3;
    r28 = r4;
    r5 = (r5 + -28872);
    r30 = 0;
    r29 = 0;
    r31 = 0;
    ctr = r0;
}

loc_80149238:
{
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_8014924C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149274;
    }
}

loc_80149250:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_80149258:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149274;
    }
}

loc_8014925C:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_80149264:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8014933C;
    }
}

loc_80149268:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_80149270:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8014933C;
    }
}

loc_80149274:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_3);
}

loc_8014928C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801492B4;
    }
}

loc_80149290:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_80149298:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801492B4;
    }
}

loc_8014929C:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_801492A4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8014933C;
    }
}

loc_801492A8:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_801492B0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8014933C;
    }
}

loc_801492B4:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_4);
}

loc_801492CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801492F4;
    }
}

loc_801492D0:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_801492D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801492F4;
    }
}

loc_801492DC:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_801492E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8014933C;
    }
}

loc_801492E8:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_801492F0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8014933C;
    }
}

loc_801492F4:
{
    r31 = (r31 + 1);
    r0 = (r31 & 255);
    r0 = (r0 * 52);
    r6 = (r5 + r0);
    r5_addr_5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_5);
}

loc_8014930C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149334;
    }
}

loc_80149310:
{
    r0 = MemoryInline::FlatRead8((r6 + 16));
}

loc_80149318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149334;
    }
}

loc_8014931C:
{
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_80149324:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8014933C;
    }
}

loc_80149328:
{
    r0 = MemoryInline::FlatRead16((r6 + 22));
}

loc_80149330:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8014933C;
    }
}

loc_80149334:
{
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80149238;
    }
}

loc_8014933C:
{
    r0 = (r31 & 255);
}

loc_80149344:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_8014935C;
    }
}

loc_80149348:
{
    r0 = (r0 * 52);
    r3 = 0x80340000u;
    r3 = (r3 + -28872);
    r30 = (r3 + r0);
    r30 = (r30 + 16);
}

loc_8014935C:
{
}

loc_80149360:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80149394;
    }
}

loc_80149364:
{
    r3 = 0x80340000u;
    r3 = (r3 + -28872);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80149374:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801494AC;
    }
}

loc_80149378:
{
    r3 = 1966080;
    r4 = 0x80280000u;
    r5 = r27;
    r3 = (r3 + 1);
    r4 = (r4 + 21336);
    ctx->lr = 0x80149390u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    goto loc_801494AC;
}

loc_80149394:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80149398:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801493A4;
    }
}

loc_8014939C:
{
    r3 = r27;
    ctx->lr = 0x801493A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014A87Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
}

loc_801493A4:
{
    r3 = 0x80340000u;
    r3 = (r3 + -28872);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_801493B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801493D0;
    }
}

loc_801493B8:
{
    r3 = 1966080;
    r4 = 0x80280000u;
    r5 = r27;
    r3 = (r3 + 3);
    r4 = (r4 + 21380);
    ctx->lr = 0x801493D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
}

loc_801493D0:
{
    r0 = 5;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 4));
}

loc_801493E0:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(r0))) {
        goto loc_801493F0;
    }
}

loc_801493E4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
    goto loc_801493F8;
}

loc_801493F0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
}

loc_801493F8:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80149400:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801494AC;
    }
}

loc_80149404:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014940C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801494AC;
    }
}

loc_80149410:
{
    r0 = (r31 & 255);
    r3 = 0x80340000u;
    r0 = (r0 * 52);
    r4 = 0;
    r3 = (r3 + -28872);
}

loc_80149428:
{
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r4));
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80149440;
    }
}

loc_80149438:
{
    // inline leaf 0x80138BC4 (4 guest instruction(s))
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r3 = MemoryInline::FlatRead8((r3 + 10175));
    // end of inlined leaf 0x80138BC4
    r29 = r3;
}

loc_80149440:
{
    r0 = (r29 & 65535);
    r5 = MemoryInline::FlatRead16((r30 + 10));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8014944C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149488;
    }
}

loc_80149450:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_80149454:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149488;
    }
}

loc_80149458:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
}

loc_8014945C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149488;
    }
}

loc_80149460:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
}

loc_80149464:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149488;
    }
}

loc_80149468:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(38));
}

loc_8014946C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149488;
    }
}

loc_80149470:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(41));
}

loc_80149474:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149488;
    }
}

loc_80149478:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(37));
}

loc_8014947C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149488;
    }
}

loc_80149480:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
}

loc_80149484:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014948C;
    }
}

loc_80149488:
{
    r5 = 15;
}

loc_8014948C:
{
    r4 = 0x80340000u;
    r3 = (r31 & 255);
    r4 = (r4 + -28872);
    r6 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 832));
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x801494ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
}

loc_801494AC:
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
// RECOMP_REGISTRATION base 0x80149200 func_80149200 preserves=true fpr_mask=0x00000000
