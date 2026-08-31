#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806B08D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806B08D8;

loc_806B08D8:
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
    r31 = r3;
    r28 = (r3 + 16);
    r29 = 4;
    r30 = 0x808C0000u;
}

loc_806B08FC:
{
    r3 = MemoryInline::FlatRead32((r28 + 728));
}

loc_806B0904:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806B0934;
    }
}

loc_806B0908:
{
    r4 = (r31 + r29);
    r0 = MemoryInline::FlatRead8((r4 + 922));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806B0914:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0934;
    }
}

loc_806B0918:
{
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 7888));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1188));
    r12 = MemoryInline::FlatRead32((r12 + 44));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctr = r12;
    ctx->lr = 0x806B0934u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0934:
{
    r29 = (r29 + 1);
    r28 = (r28 + 4);
}

loc_806B0940:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(16))) {
        goto loc_806B08FC;
    }
}

loc_806B0944:
{
    r0 = MemoryInline::FlatRead32((r31 + 292));
}

loc_806B094C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B09B4;
    }
}

loc_806B0950:
{
    r29 = r31;
    r27 = 0;
    r28 = 0;
    r30 = 0x808C0000u;
}

loc_806B0960:
{
    r3 = MemoryInline::FlatRead32((r31 + 1328));
    r3_addr_2 = (r3 + r28);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_806B096C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806B099C;
    }
}

loc_806B0970:
{
    r4 = (r31 + r27);
    r0 = MemoryInline::FlatRead8((r4 + 1340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806B097C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B099C;
    }
}

loc_806B0980:
{
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 7888));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 1408));
    r12 = MemoryInline::FlatRead32((r12 + 44));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctr = r12;
    ctx->lr = 0x806B099Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B099C:
{
    r27 = (r27 + 1);
    r29 = (r29 + 4);
}

loc_806B09A8:
{
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(36))) {
        goto loc_806B0960;
    }
}

loc_806B09B0:
{
    goto loc_806B0A1C;
}

loc_806B09B4:
{
}

loc_806B09B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_806B0A1C;
    }
}

loc_806B09BC:
{
    r29 = r31;
    r27 = 0;
    r28 = 0;
    r30 = 0x808C0000u;
}

loc_806B09CC:
{
    r3 = MemoryInline::FlatRead32((r31 + 1556));
    r3_addr_4 = (r3 + r28);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
}

loc_806B09D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806B0A08;
    }
}

loc_806B09DC:
{
    r4 = (r31 + r27);
    r0 = MemoryInline::FlatRead8((r4 + 1568));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806B09E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0A08;
    }
}

loc_806B09EC:
{
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 7888));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 1628));
    r12 = MemoryInline::FlatRead32((r12 + 44));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctr = r12;
    ctx->lr = 0x806B0A08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0A08:
{
    r27 = (r27 + 1);
    r29 = (r29 + 4);
}

loc_806B0A14:
{
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(28))) {
        goto loc_806B09CC;
    }
}

loc_806B0A1C:
{
    r28 = r31;
    r27 = 0;
    r30 = 0x808C0000u;
}

loc_806B0A28:
{
    r3 = MemoryInline::FlatRead32((r28 + 496));
}

loc_806B0A30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806B0A60;
    }
}

loc_806B0A34:
{
    r4 = (r31 + r27);
    r0 = MemoryInline::FlatRead8((r4 + 864));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806B0A40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0A60;
    }
}

loc_806B0A44:
{
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 7888));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 956));
    r12 = MemoryInline::FlatRead32((r12 + 44));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctr = r12;
    ctx->lr = 0x806B0A60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0A60:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
}

loc_806B0A6C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(44))) {
        goto loc_806B0A28;
    }
}

loc_806B0A70:
{
    r28 = r31;
    r27 = 0;
    r30 = 0x808C0000u;
}

loc_806B0A7C:
{
    r3 = MemoryInline::FlatRead32((r28 + 672));
}

loc_806B0A84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806B0AB4;
    }
}

loc_806B0A88:
{
    r4 = (r31 + r27);
    r0 = MemoryInline::FlatRead8((r4 + 908));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806B0A94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0AB4;
    }
}

loc_806B0A98:
{
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 7888));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1132));
    r12 = MemoryInline::FlatRead32((r12 + 44));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctr = r12;
    ctx->lr = 0x806B0AB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0AB4:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
}

loc_806B0AC0:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(14))) {
        goto loc_806B0A7C;
    }
}

loc_806B0AC4:
{
    r0 = MemoryInline::FlatRead32((r31 + 292));
}

loc_806B0ACC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806B0B34;
    }
}

loc_806B0AD0:
{
    r29 = r31;
    r27 = 0;
    r28 = 0;
    r30 = 0x808C0000u;
}

loc_806B0AE0:
{
    r3 = MemoryInline::FlatRead32((r31 + 1324));
    r3_addr_7 = (r3 + r28);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
}

loc_806B0AEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806B0B1C;
    }
}

loc_806B0AF0:
{
    r4 = (r31 + r27);
    r0 = MemoryInline::FlatRead8((r4 + 1332));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806B0AFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0B1C;
    }
}

loc_806B0B00:
{
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 7888));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 1376));
    r12 = MemoryInline::FlatRead32((r12 + 44));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctr = r12;
    ctx->lr = 0x806B0B1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0B1C:
{
    r27 = (r27 + 1);
    r29 = (r29 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(8));
}

loc_806B0B28:
{
    r28 = (r28 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806B0AE0;
    }
}

loc_806B0B30:
{
    goto loc_806B0B9C;
}

loc_806B0B34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806B0B38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B0B9C;
    }
}

loc_806B0B3C:
{
    r28 = r31;
    r27 = 0;
    r29 = 0;
    r30 = 0x808C0000u;
}

loc_806B0B4C:
{
    r3 = MemoryInline::FlatRead32((r31 + 1552));
    r3_addr_9 = (r3 + r29);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
}

loc_806B0B58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806B0B88;
    }
}

loc_806B0B5C:
{
    r4 = (r31 + r27);
    r0 = MemoryInline::FlatRead8((r4 + 1560));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806B0B68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B0B88;
    }
}

loc_806B0B6C:
{
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 7888));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1596));
    r12 = MemoryInline::FlatRead32((r12 + 44));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctr = r12;
    ctx->lr = 0x806B0B88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806B0B88:
{
    r27 = (r27 + 1);
    r28 = (r28 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(8));
}

loc_806B0B94:
{
    r29 = (r29 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806B0B4C;
    }
}

loc_806B0B9C:
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806B08D8 func_806B08D8 preserves=true fpr_mask=0x00000000
