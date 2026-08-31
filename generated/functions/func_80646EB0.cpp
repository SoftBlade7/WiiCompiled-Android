#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_806212FC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_806212FC_statefree_v0(uint32_t, uint32_t);

extern "C" void func_80646EB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80646EB0;

loc_80646EB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80646ED4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806474CC;
    }
}

loc_80646ED8:
{
    r0 = MemoryInline::FlatRead32((r3 + 88));
}

loc_80646EE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80646F10;
    }
}

loc_80646EE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_80646EE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80646F50;
    }
}

loc_80646EEC:
{
}

loc_80646EF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80647030;
    }
}

loc_80646EF4:
{
}

loc_80646EF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_80647058;
    }
}

loc_80646EFC:
{
}

loc_80646F00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_80647278;
    }
}

loc_80646F04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_80646F08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647434;
    }
}

loc_80646F0C:
{
    goto loc_806474CC;
}

loc_80646F10:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D294C (7 guest instruction(s))
}

loc_inl0_0x805D294C:
{
    r0 = MemoryInline::FlatRead8((r3 + 14168));
}

loc_inl0_0x805D2954:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x805D2960;
    }
}

loc_inl0_0x805D2958:
{
    r3 = 1;
    goto loc_inl0_cont_805D294C;
}

loc_inl0_0x805D2960:
{
    r3 = MemoryInline::FlatRead8((r3 + 14424));
}

loc_inl0_cont_805D294C:
{
    // end of inlined leaf 0x805D294C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80646F28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806474CC;
    }
}

loc_80646F2C:
{
    r4 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r4 = MemoryInline::FlatRead32((r4 + 292));
    ctx->lr = 0x80646F44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80655C10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 7;
    MemoryInline::FlatWrite32((r31 + 88), r0);
    goto loc_806474CC;
}

loc_80646F50:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    ctx->lr = 0x80646F5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806569B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    ctx->lr = 0x80646F6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80656D9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80646F70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80646F9C;
    }
}

loc_80646F74:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 110), static_cast<uint8_t>(r0));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    ctx->lr = 0x80646F90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805D29DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 8;
    MemoryInline::FlatWrite32((r31 + 88), r0);
    goto loc_806474CC;
}

loc_80646F9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80646FA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806474CC;
    }
}

loc_80646FA8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80646FBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80646FC8;
    }
}

loc_80646FC0:
{
    r29 = 0;
    goto loc_8064701C;
}

loc_80646FC8:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647018;
    }
}

loc_80646FD4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80646FE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80647000;
}

loc_80646FEC:
{
}

loc_80646FF0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80646FFC;
    }
}

loc_80646FF4:
{
    r0 = 1;
    goto loc_8064700C;
}

loc_80646FFC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80647000:
{
}

loc_80647004:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80646FEC;
    }
}

loc_80647008:
{
    r0 = 0;
}

loc_8064700C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80647010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647018;
    }
}

loc_80647014:
{
    goto loc_8064701C;
}

loc_80647018:
{
    r29 = 0;
}

loc_8064701C:
{
    r3 = r29;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
    r0 = 13;
    MemoryInline::FlatWrite32((r31 + 88), r0);
    goto loc_806474CC;
}

loc_80647030:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    // inline leaf 0x805D294C (7 guest instruction(s))
}

loc_inl2_0x805D294C:
{
    r0 = MemoryInline::FlatRead8((r3 + 14168));
}

loc_inl2_0x805D2954:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x805D2960;
    }
}

loc_inl2_0x805D2958:
{
    r3 = 1;
    goto loc_inl2_cont_805D294C;
}

loc_inl2_0x805D2960:
{
    r3 = MemoryInline::FlatRead8((r3 + 14424));
}

loc_inl2_cont_805D294C:
{
    // end of inlined leaf 0x805D294C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80647048:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806474CC;
    }
}

loc_8064704C:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r31 + 88), r0);
    goto loc_806474CC;
}

loc_80647058:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8064706C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80647078;
    }
}

loc_80647070:
{
    r29 = 0;
    goto loc_806470CC;
}

loc_80647078:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806470C8;
    }
}

loc_80647084:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80647098u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806470B0;
}

loc_8064709C:
{
}

loc_806470A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_806470AC;
    }
}

loc_806470A4:
{
    r0 = 1;
    goto loc_806470BC;
}

loc_806470AC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806470B0:
{
}

loc_806470B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8064709C;
    }
}

loc_806470B8:
{
    r0 = 0;
}

loc_806470BC:
{
}

loc_806470C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806470C8;
    }
}

loc_806470C4:
{
    goto loc_806470CC;
}

loc_806470C8:
{
    r29 = 0;
}

loc_806470CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_806470D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806470E0;
    }
}

loc_806470D4:
{
    r0 = MemoryInline::FlatRead32((r29 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806470DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806474CC;
    }
}

loc_806470E0:
{
    r3 = 0x809C0000u;
    r4 = (r31 + 108);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x806470F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80672E14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806470F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647104;
    }
}

loc_806470F8:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r31 + 88), r0);
    goto loc_806474CC;
}

loc_80647104:
{
    r0 = MemoryInline::FlatRead8((r31 + 108));
}

loc_8064710C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80647130;
    }
}

loc_80647110:
{
    r0 = MemoryInline::FlatRead8((r31 + 109));
}

loc_80647118:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80647130;
    }
}

loc_8064711C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8464));
    ctx->lr = 0x80647128u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x806635E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8064712C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064726C;
    }
}

loc_80647130:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8464));
    ctx->lr = 0x8064713Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x806635E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80647140:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064720C;
    }
}

loc_80647144:
{
    r3 = MemoryInline::FlatRead32((r30 + 8464));
    ctx->lr = 0x8064714Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80663610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8064715C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8064717C;
    }
}

loc_80647160:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_80647180;
}

loc_8064717C:
{
    r4 = 0;
}

loc_80647180:
{
    r3 = 0x809C0000u;
    r4 = (r4 + 65536);
    r5 = MemoryInline::FlatRead32((r3 + 8464));
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 92), 0, 64u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 92));
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + -28744), 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r4 + -28744), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r5 + 100));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 96));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + -28740), r3);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + -28736), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 104));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + -28732), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 112));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 108));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + -28728), r3);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + -28724), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r5 + 116));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + -28720), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r5 + 120));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + -28716), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r5 + 124));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r4 + -28712), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r5 + 128));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r4 + -28708), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r5 + 136));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r5 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r4 + -28704), r3);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r4 + -28700), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r5 + 144));
            r3 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r5 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r4 + -28696), r3);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r4 + -28692), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r5 + 148));
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r4 + -28688), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r5 + 152));
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r4 + -28684), r0);
}

loc_8064720C:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8064721C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8064723C;
    }
}

loc_80647220:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_80647240;
}

loc_8064723C:
{
    r3 = 0;
}

loc_80647240:
{
    r4 = 0x809C0000u;
    r3 = (r3 + 65536);
    r4 = MemoryInline::FlatRead32((r4 + 8464));
    r5 = 360;
    r3 = (r3 + -29104);
    r4 = (r4 + 516);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213E4 (11 guest instruction(s))
}

loc_inl3_0x806213E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x806213EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x806213F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x806213F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x806213FC:
{
    r4 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_806213E4;
}

loc_inl3_return:
{
}

loc_inl3_cont_806213E4:
{
    // end of inlined leaf 0x806213E4
}

loc_8064726C:
{
    r0 = 11;
    MemoryInline::FlatWrite32((r31 + 88), r0);
    goto loc_806474CC;
}

loc_80647278:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80647288:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806474CC;
    }
}

loc_8064728C:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    r0 = (r3 + -3);
}

loc_8064729C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_806472AC;
    }
}

loc_806472A0:
{
}

loc_806472A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_806472B8;
    }
}

loc_806472A8:
{
    goto loc_806472C0;
}

loc_806472AC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 108), static_cast<uint8_t>(r0));
    goto loc_806472C0;
}

loc_806472B8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 108), static_cast<uint8_t>(r0));
}

loc_806472C0:
{
    r0 = MemoryInline::FlatRead8((r31 + 108));
}

loc_806472C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806472EC;
    }
}

loc_806472CC:
{
    r0 = MemoryInline::FlatRead8((r31 + 109));
}

loc_806472D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806472EC;
    }
}

loc_806472D8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8464));
    ctx->lr = 0x806472E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x806635E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806472E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647428;
    }
}

loc_806472EC:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8464));
    ctx->lr = 0x806472F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x806635E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806472FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806473C8;
    }
}

loc_80647300:
{
    r3 = MemoryInline::FlatRead32((r30 + 8464));
    ctx->lr = 0x80647308u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80663610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80647318:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80647338;
    }
}

loc_8064731C:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_8064733C;
}

loc_80647338:
{
    r4 = 0;
}

loc_8064733C:
{
    r3 = 0x809C0000u;
    r4 = (r4 + 65536);
    r5 = MemoryInline::FlatRead32((r3 + 8464));
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 92), 0, 64u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r5 + 92));
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + -28744), 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r4 + -28744), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 4u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r5 + 100));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r5 + 96));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r4 + -28740), r3);
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r4 + -28736), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r5 + 104));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r4 + -28732), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r5 + 112));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r5 + 108));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r4 + -28728), r3);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r4 + -28724), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r5 + 116));
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r4 + -28720), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r5 + 120));
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r4 + -28716), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r5 + 124));
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r4 + -28712), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r5 + 128));
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r4 + -28708), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r5 + 136));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r5 + 132));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r4 + -28704), r3);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r4 + -28700), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r5 + 144));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r5 + 140));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r4 + -28696), r3);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r4 + -28692), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r5 + 148));
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r4 + -28688), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r5 + 152));
    MemoryInline::WriteResolved32(guest_range_3, 60u, (r4 + -28684), r0);
}

loc_806473C8:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806473D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806473F8;
    }
}

loc_806473DC:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_806473FC;
}

loc_806473F8:
{
    r3 = 0;
}

loc_806473FC:
{
    r4 = 0x809C0000u;
    r3 = (r3 + 65536);
    r4 = MemoryInline::FlatRead32((r4 + 8464));
    r5 = 360;
    r3 = (r3 + -29104);
    r4 = (r4 + 516);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213E4 (11 guest instruction(s))
}

loc_inl6_0x806213E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl6_0x806213EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x806213F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl6_0x806213F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x806213FC:
{
    r4 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl6_cont_806213E4;
}

loc_inl6_return:
{
}

loc_inl6_cont_806213E4:
{
    // end of inlined leaf 0x806213E4
}

loc_80647428:
{
    r0 = 11;
    MemoryInline::FlatWrite32((r31 + 88), r0);
    goto loc_806474CC;
}

loc_80647434:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x806212FCu) && KnownTranslatedCpuCall<0x806212FCu>::kAvailable && !KnownTranslatedCpuCall<0x806212FCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x806212FCu>()) {
        const auto state_free_result_806212FC_82CD = func_806212FC_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_806212FC_82CD[0]);
        r3 = static_cast<uint32_t>(state_free_result_806212FC_82CD[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x806212FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80647448:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806474CC;
    }
}

loc_8064744C:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r31 + 88), r0);
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80647464:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80647470;
    }
}

loc_80647468:
{
    r29 = 0;
    goto loc_806474C4;
}

loc_80647470:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806474C0;
    }
}

loc_8064747C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80647490u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806474A8;
}

loc_80647494:
{
}

loc_80647498:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_806474A4;
    }
}

loc_8064749C:
{
    r0 = 1;
    goto loc_806474B4;
}

loc_806474A4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806474A8:
{
}

loc_806474AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80647494;
    }
}

loc_806474B0:
{
    r0 = 0;
}

loc_806474B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806474B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806474C0;
    }
}

loc_806474BC:
{
    goto loc_806474C4;
}

loc_806474C0:
{
    r29 = 0;
}

loc_806474C4:
{
    r3 = r29;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
}

loc_806474CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80646EB0 func_80646EB0 preserves=true fpr_mask=0x00000000
