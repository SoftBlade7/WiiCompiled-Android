#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805C5AE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805C5AE0;

loc_805C5AE0:
{
    MemoryInline::FlatWriteRam32((r1 + -448), r1);
    r1 = (r1 + -448);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 452), r0);
    MemoryInline::FlatWriteRam32((r1 + 444), r31);
    MemoryInline::FlatWriteRam32((r1 + 440), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 436), r29);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805C5B04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C613C;
    }
}

loc_805C5B08:
{
    r0 = MemoryInline::FlatRead32((r3 + 84));
}

loc_805C5B10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805C5B30;
    }
}

loc_805C5B14:
{
}

loc_805C5B18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805C5BBC;
    }
}

loc_805C5B1C:
{
}

loc_805C5B20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805C5FBC;
    }
}

loc_805C5B24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805C5B28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C6048;
    }
}

loc_805C5B2C:
{
    goto loc_805C613C;
}

loc_805C5B30:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805C5B44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C5B50;
    }
}

loc_805C5B48:
{
    r29 = 0;
    goto loc_805C5BA4;
}

loc_805C5B50:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C5BA0;
    }
}

loc_805C5B5C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805C5B70u;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C5B88;
}

loc_805C5B74:
{
}

loc_805C5B78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_805C5B84;
    }
}

loc_805C5B7C:
{
    r0 = 1;
    goto loc_805C5B94;
}

loc_805C5B84:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805C5B88:
{
}

loc_805C5B8C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805C5B74;
    }
}

loc_805C5B90:
{
    r0 = 0;
}

loc_805C5B94:
{
}

loc_805C5B98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805C5BA0;
    }
}

loc_805C5B9C:
{
    goto loc_805C5BA4;
}

loc_805C5BA0:
{
    r29 = 0;
}

loc_805C5BA4:
{
    r0 = MemoryInline::FlatRead32((r29 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C5BAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C613C;
    }
}

loc_805C5BB0:
{
    r3 = r30;
    ctx->lr = 0x805C5BB8u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805C6828u>(ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C613C;
}

loc_805C5BBC:
{
    r31 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805C5BCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C613C;
    }
}

loc_805C5BD0:
{
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
}

loc_805C5BDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_805C5F34;
    }
}

loc_805C5BE0:
{
    r0 = MemoryInline::FlatRead8((r30 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C5BE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C5E8C;
    }
}

loc_805C5BEC:
{
    r3 = (r1 + 208);
    r4 = (r30 + 116);
    ctx->lr = 0x805C5BF8u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C398u>(ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805C5C0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C5C18;
    }
}

loc_805C5C10:
{
    r29 = 0;
    goto loc_805C5C6C;
}

loc_805C5C18:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C5C68;
    }
}

loc_805C5C24:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805C5C38u;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C5C50;
}

loc_805C5C3C:
{
}

loc_805C5C40:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_805C5C4C;
    }
}

loc_805C5C44:
{
    r0 = 1;
    goto loc_805C5C5C;
}

loc_805C5C4C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805C5C50:
{
}

loc_805C5C54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805C5C3C;
    }
}

loc_805C5C58:
{
    r0 = 0;
}

loc_805C5C5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C5C60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C5C68;
    }
}

loc_805C5C64:
{
    goto loc_805C5C6C;
}

loc_805C5C68:
{
    r29 = 0;
}

loc_805C5C6C:
{
    r3 = r29;
    r4 = (r30 + 116);
    r5 = 1;
    ctx->lr = 0x805C5C7Cu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E1894u>(ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 84), r0);
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r1 + 404));
    r5 = MemoryInline::FlatRead32(r4);
    r4 = (r3 + -7);
    r3 = MemoryInline::FlatRead32((r5 + 1028));
    // inline leaf 0x805D2890 (14 guest instruction(s))
}

loc_inl2_0x805D2890:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
}

loc_inl2_0x805D2894:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl2_0x805D28C0;
    }
}

loc_inl2_0x805D2898:
{
    r0 = (r4 * 472);
    r4 = (r3 + r0);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x805D28B8;
    }
}

loc_inl2_0x805D28B0:
{
    r3 = (r4 + 8);
    goto loc_inl2_cont_805D2890;
}

loc_inl2_0x805D28B8:
{
    r3 = 0;
    goto loc_inl2_cont_805D2890;
}

loc_inl2_0x805D28C0:
{
    r3 = 0;
}

loc_inl2_cont_805D2890:
{
    // end of inlined leaf 0x805D2890
    r4 = 0x808B0000u;
    r0 = 0;
    r4 = (r4 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 184), r4);
    r5 = MemoryInline::FlatRead32((r1 + 392));
    r31 = r3;
    MemoryInline::FlatWriteRam16((r1 + 188), static_cast<uint16_t>(r0));
    r4 = (r1 + 108);
    MemoryInline::FlatWriteRam8((r1 + 190), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 192), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 194), static_cast<uint8_t>(r0));
    ctx->lr = 0x805C5CD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80519780u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r1 + 194));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C5CD8:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_805C5D58;
    }
}

loc_805C5CDC:
{
    r0 = MemoryInline::FlatRead8((r1 + 382));
}

loc_805C5CE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805C5CF0;
    }
}

loc_805C5CE8:
{
    r0 = 0;
    goto loc_805C5D50;
}

loc_805C5CF0:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_805C5CFC;
    }
}

loc_805C5CF4:
{
    r0 = 1;
    goto loc_805C5D50;
}

loc_805C5CFC:
{
    r0 = MemoryInline::FlatRead16((r1 + 188));
    r3 = MemoryInline::FlatRead16((r1 + 376));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_805C5D08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805C5D14;
    }
}

loc_805C5D0C:
{
    r0 = 1;
    goto loc_805C5D50;
}

loc_805C5D14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C5D4C;
    }
}

loc_805C5D18:
{
    r0 = MemoryInline::FlatRead8((r1 + 190));
    r3 = MemoryInline::FlatRead8((r1 + 378));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_805C5D24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805C5D30;
    }
}

loc_805C5D28:
{
    r0 = 1;
    goto loc_805C5D50;
}

loc_805C5D30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C5D4C;
    }
}

loc_805C5D34:
{
    r3 = MemoryInline::FlatRead16((r1 + 380));
    r0 = MemoryInline::FlatRead16((r1 + 192));
}

loc_805C5D40:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_805C5D4C;
    }
}

loc_805C5D44:
{
    r0 = 1;
    goto loc_805C5D50;
}

loc_805C5D4C:
{
    r0 = 0;
}

loc_805C5D50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C5D54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C5E00;
    }
}

loc_805C5D58:
{
    r4 = 0x808B0000u;
    r0 = 9;
    r3 = 0;
    MemoryInline::FlatWriteRam16((r1 + 88), static_cast<uint16_t>(r3));
    r4 = (r4 + 11588);
    r5 = (r1 + 4);
    MemoryInline::FlatWriteRam32((r1 + 84), r4);
    r4 = (r1 + 228);
    MemoryInline::FlatWriteRam8((r1 + 90), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 92), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 94), static_cast<uint8_t>(r3));
    ctr = r0;
}

loc_805C5D88:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805C5D88;
    }
}

loc_805C5D9C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r3 = r31;
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r4 = (r1 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 376), 0, 24u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r1 + 376));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r1 + 378));
    r9 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r1 + 380));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r1 + 382));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 384));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r1 + 388));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r1 + 396));
    MemoryInline::FlatWriteRam16((r1 + 88), static_cast<uint16_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r1 + 392));
    MemoryInline::FlatWriteRam8((r1 + 90), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam16((r1 + 92), static_cast<uint16_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 94), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam32((r1 + 96), r7);
    MemoryInline::FlatWriteRam32((r1 + 100), r6);
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    ctx->lr = 0x805C5DECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051986Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    ctx->lr = 0x805C5E00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D21B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805C5E00:
{
    r4 = MemoryInline::FlatRead32((r30 + 10364));
    r3 = 0x809C0000u;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r30 + 10364), r0);
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805C5E1C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805C5E3C;
    }
}

loc_805C5E20:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_805C5E40;
}

loc_805C5E3C:
{
    r3 = 0;
}

loc_805C5E40:
{
    r5 = (r3 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r5 + -27992));
    r0 = (r3 + -31073);
}

loc_805C5E54:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_805C5E60;
    }
}

loc_805C5E58:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + -27992), r0);
}

loc_805C5E60:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl3_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x80621418:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x80621424:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_80621410;
}

loc_inl3_return:
{
}

loc_inl3_cont_80621410:
{
    // end of inlined leaf 0x80621410
    r4 = 0x80520000u;
    r3 = (r1 + 312);
    r4 = (r4 + -15564);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x805C5E88u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800210ECu>(ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C613C;
}

loc_805C5E8C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    r4 = (r30 + 10357);
    ctx->lr = 0x805C5E98u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066EA80u>(ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805C5E9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C5EAC;
    }
}

loc_805C5EA0:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 84), r0);
    goto loc_805C613C;
}

loc_805C5EAC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805C5EC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C5ECC;
    }
}

loc_805C5EC4:
{
    r29 = 0;
    goto loc_805C5F20;
}

loc_805C5ECC:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C5F1C;
    }
}

loc_805C5ED8:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805C5EECu;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C5F04;
}

loc_805C5EF0:
{
}

loc_805C5EF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_805C5F00;
    }
}

loc_805C5EF8:
{
    r0 = 1;
    goto loc_805C5F10;
}

loc_805C5F00:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805C5F04:
{
}

loc_805C5F08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805C5EF0;
    }
}

loc_805C5F0C:
{
    r0 = 0;
}

loc_805C5F10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C5F14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C5F1C;
    }
}

loc_805C5F18:
{
    goto loc_805C5F20;
}

loc_805C5F1C:
{
    r29 = 0;
}

loc_805C5F20:
{
    r3 = r29;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 84), r0);
    goto loc_805C613C;
}

loc_805C5F34:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805C5F48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C5F54;
    }
}

loc_805C5F4C:
{
    r29 = 0;
    goto loc_805C5FA8;
}

loc_805C5F54:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C5FA4;
    }
}

loc_805C5F60:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805C5F74u;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C5F8C;
}

loc_805C5F78:
{
}

loc_805C5F7C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_805C5F88;
    }
}

loc_805C5F80:
{
    r0 = 1;
    goto loc_805C5F98;
}

loc_805C5F88:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805C5F8C:
{
}

loc_805C5F90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805C5F78;
    }
}

loc_805C5F94:
{
    r0 = 0;
}

loc_805C5F98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C5F9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C5FA4;
    }
}

loc_805C5FA0:
{
    goto loc_805C5FA8;
}

loc_805C5FA4:
{
    r29 = 0;
}

loc_805C5FA8:
{
    r3 = r29;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 84), r0);
    goto loc_805C613C;
}

loc_805C5FBC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805C5FD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C5FDC;
    }
}

loc_805C5FD4:
{
    r29 = 0;
    goto loc_805C6030;
}

loc_805C5FDC:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C602C;
    }
}

loc_805C5FE8:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805C5FFCu;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C6014;
}

loc_805C6000:
{
}

loc_805C6004:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_805C6010;
    }
}

loc_805C6008:
{
    r0 = 1;
    goto loc_805C6020;
}

loc_805C6010:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805C6014:
{
}

loc_805C6018:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805C6000;
    }
}

loc_805C601C:
{
    r0 = 0;
}

loc_805C6020:
{
}

loc_805C6024:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805C602C;
    }
}

loc_805C6028:
{
    goto loc_805C6030;
}

loc_805C602C:
{
    r29 = 0;
}

loc_805C6030:
{
    r0 = MemoryInline::FlatRead32((r29 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C6038:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C613C;
    }
}

loc_805C603C:
{
    r3 = r30;
    ctx->lr = 0x805C6044u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805C6828u>(ctx);
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C613C;
}

loc_805C6048:
{
    r31 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805C6058:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C613C;
    }
}

loc_805C605C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
}

loc_805C6068:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_805C6094;
    }
}

loc_805C606C:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r5 = MemoryInline::FlatRead16((r4 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r4 = (r30 + r5);
    r3 = (r0 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 10357));
    MemoryInline::FlatWrite8((r3 + 1216), static_cast<uint8_t>(r0));
}

loc_805C6094:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
}

loc_805C60A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_805C60B8;
    }
}

loc_805C60A8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213B8 (5 guest instruction(s))
    r4 = 6;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806213B8
}

loc_805C60B8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805C60CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C60D8;
    }
}

loc_805C60D0:
{
    r29 = 0;
    goto loc_805C612C;
}

loc_805C60D8:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C6128;
    }
}

loc_805C60E4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805C60F8u;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C6110;
}

loc_805C60FC:
{
}

loc_805C6100:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_805C610C;
    }
}

loc_805C6104:
{
    r0 = 1;
    goto loc_805C611C;
}

loc_805C610C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805C6110:
{
}

loc_805C6114:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805C60FC;
    }
}

loc_805C6118:
{
    r0 = 0;
}

loc_805C611C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C6120:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C6128;
    }
}

loc_805C6124:
{
    goto loc_805C612C;
}

loc_805C6128:
{
    r29 = 0;
}

loc_805C612C:
{
    r3 = r29;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 84), r0);
}

loc_805C613C:
{
    r0 = MemoryInline::FlatRead32((r1 + 452));
    r31 = MemoryInline::FlatRead32((r1 + 444));
    r30 = MemoryInline::FlatRead32((r1 + 440));
    r29 = MemoryInline::FlatRead32((r1 + 436));
    ctx->lr = r0;
    r1 = (r1 + 448);
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
// RECOMP_REGISTRATION base 0x805C5AE0 func_805C5AE0 preserves=true fpr_mask=0x00000000
