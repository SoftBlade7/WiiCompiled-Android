#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052C7E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8052C7E4;

loc_8052C7E4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
}

loc_8052C7F0:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r26);
    MemoryInline::FlatWriteRam32((r1 + 28), r27);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r26 = 0x808B0000u;
    r27 = r3;
    r28 = r4;
    r26 = (r26 + 12840);
    r31 = 0;
    r30 = 0;
    r29 = 1;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8052C824;
    }
}

loc_8052C818:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_8052C820:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052C82C;
    }
}

loc_8052C824:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
}

loc_8052C82C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8052C830:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052C840;
    }
}

loc_8052C834:
{
    r0 = MemoryInline::FlatRead8((r3 + 21));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052C83C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052C848;
    }
}

loc_8052C840:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
}

loc_8052C848:
{
    r3 = MemoryInline::FlatRead32(r26);
    r4 = (r1 + 8);
    ctx->lr = 0x8052C854u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052B84Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052C858:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052C8B0;
    }
}

loc_8052C85C:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8052C868:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052C878;
    }
}

loc_8052C86C:
{
}

loc_8052C870:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052C89C;
    }
}

loc_8052C874:
{
    goto loc_8052C8A8;
}

loc_8052C878:
{
    r3 = MemoryInline::FlatRead32(r26);
    ctx->lr = 0x8052C880u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052BA54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052C884:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052C894;
    }
}

loc_8052C888:
{
    r31 = 1;
    r30 = 175;
    goto loc_8052C8B4;
}

loc_8052C894:
{
    r29 = 0;
    goto loc_8052C8B4;
}

loc_8052C89C:
{
    r31 = 1;
    r30 = 175;
    goto loc_8052C8B4;
}

loc_8052C8A8:
{
    r3 = 8;
    goto loc_8052C8B4;
}

loc_8052C8B0:
{
    r29 = 0;
}

loc_8052C8B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8052C8B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C92C;
    }
}

loc_8052C8BC:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r4 = (r1 + 8);
    ctx->lr = 0x8052C8C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052B84Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052C8CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052C928;
    }
}

loc_8052C8D0:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8052C8DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052C8EC;
    }
}

loc_8052C8E0:
{
}

loc_8052C8E4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052C910;
    }
}

loc_8052C8E8:
{
    goto loc_8052C91C;
}

loc_8052C8EC:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    ctx->lr = 0x8052C8F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052BA54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052C8F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052C908;
    }
}

loc_8052C8FC:
{
    r31 = (r31 + 1);
    r30 = (r30 + 6);
    goto loc_8052C92C;
}

loc_8052C908:
{
    r29 = 0;
    goto loc_8052C92C;
}

loc_8052C910:
{
    r31 = (r31 + 1);
    r30 = (r30 + 6);
    goto loc_8052C92C;
}

loc_8052C91C:
{
    r3 = 8;
    r29 = 0;
    goto loc_8052C92C;
}

loc_8052C928:
{
    r29 = 0;
}

loc_8052C92C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8052C930:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052C9A4;
    }
}

loc_8052C934:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r4 = (r1 + 8);
    ctx->lr = 0x8052C940u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052B84Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052C944:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052C9A0;
    }
}

loc_8052C948:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8052C954:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052C964;
    }
}

loc_8052C958:
{
}

loc_8052C95C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052C988;
    }
}

loc_8052C960:
{
    goto loc_8052C994;
}

loc_8052C964:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    ctx->lr = 0x8052C96Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052BA54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052C970:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052C980;
    }
}

loc_8052C974:
{
    r31 = (r31 + 1);
    r30 = (r30 + 1);
    goto loc_8052C9A4;
}

loc_8052C980:
{
    r29 = 0;
    goto loc_8052C9A4;
}

loc_8052C988:
{
    r31 = (r31 + 1);
    r30 = (r30 + 1);
    goto loc_8052C9A4;
}

loc_8052C994:
{
    r3 = 8;
    r29 = 0;
    goto loc_8052C9A4;
}

loc_8052C9A0:
{
    r29 = 0;
}

loc_8052C9A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8052C9A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052CA1C;
    }
}

loc_8052C9AC:
{
    r3 = MemoryInline::FlatRead32((r26 + 16));
    r4 = (r1 + 8);
    ctx->lr = 0x8052C9B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052B84Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052C9BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052CA18;
    }
}

loc_8052C9C0:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8052C9CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8052C9DC;
    }
}

loc_8052C9D0:
{
}

loc_8052C9D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052CA00;
    }
}

loc_8052C9D8:
{
    goto loc_8052CA0C;
}

loc_8052C9DC:
{
    r3 = MemoryInline::FlatRead32((r26 + 16));
    ctx->lr = 0x8052C9E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052BA54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052C9E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052C9F8;
    }
}

loc_8052C9EC:
{
    r31 = (r31 + 1);
    r30 = (r30 + 2);
    goto loc_8052CA1C;
}

loc_8052C9F8:
{
    r29 = 0;
    goto loc_8052CA1C;
}

loc_8052CA00:
{
    r31 = (r31 + 1);
    r30 = (r30 + 2);
    goto loc_8052CA1C;
}

loc_8052CA0C:
{
    r3 = 8;
    r29 = 0;
    goto loc_8052CA1C;
}

loc_8052CA18:
{
    r29 = 0;
}

loc_8052CA1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8052CA20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052CAF0;
    }
}

loc_8052CA24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8052CA28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052CAF0;
    }
}

loc_8052CA2C:
{
    r3 = r30;
    r4 = r31;
    r5 = (r1 + 12);
    ctx->lr = 0x8052CA3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052B684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8052CA40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8052CA94;
    }
}

loc_8052CA44:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_8052CA4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052CA5C;
    }
}

loc_8052CA50:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r27 + 24), r0);
    goto loc_8052CA9C;
}

loc_8052CA5C:
{
    r3 = 0;
    MemoryInline::FlatWrite32((r27 + 24), r3);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 & 5);
}

loc_8052CA6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052CA78;
    }
}

loc_8052CA70:
{
    r0 = (r3 | 4);
    MemoryInline::FlatWrite32((r27 + 24), r0);
}

loc_8052CA78:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 & 10);
}

loc_8052CA80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052CA9C;
    }
}

loc_8052CA84:
{
    r0 = MemoryInline::FlatRead32((r27 + 24));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r27 + 24), r0);
    goto loc_8052CA9C;
}

loc_8052CA94:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 24), r0);
}

loc_8052CA9C:
{
    r0 = MemoryInline::FlatRead32((r27 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052CAA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052CAEC;
    }
}

loc_8052CAA8:
{
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x8052CAB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052C68Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052CAB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052CAF0;
    }
}

loc_8052CABC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x8052CAC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80672CC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052CACC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052CAD8;
    }
}

loc_8052CAD0:
{
    r3 = 0;
    goto loc_8052CAF0;
}

loc_8052CAD8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(7));
}

loc_8052CADC:
{
    r3 = 8;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052CAF0;
    }
}

loc_8052CAE4:
{
    r3 = 6;
    goto loc_8052CAF0;
}

loc_8052CAEC:
{
    r3 = 7;
}

loc_8052CAF0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r27 + 21), static_cast<uint8_t>(r0));
    r26 = MemoryInline::FlatRead32((r1 + 24));
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8052C7E4 func_8052C7E4 preserves=true fpr_mask=0x00000000
