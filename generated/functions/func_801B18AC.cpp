#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B18AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801B18AC;

loc_801B18AC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r7 = 0x80350000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = (r7 + -32160);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead8((r7 + 344));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_801B18D0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801B1BCC;
    }
}

loc_801B18D4:
{
    r4 = 0x802A0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -12664);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801B18ECu:
        goto loc_801B18EC;
        break;
    case 0x801B1930u:
        goto loc_801B1930;
        break;
    case 0x801B1970u:
        goto loc_801B1970;
        break;
    case 0x801B19A0u:
        goto loc_801B19A0;
        break;
    case 0x801B19E8u:
        goto loc_801B19E8;
        break;
    case 0x801B1A1Cu:
        goto loc_801B1A1C;
        break;
    case 0x801B1A50u:
        goto loc_801B1A50;
        break;
    case 0x801B1A94u:
        goto loc_801B1A94;
        break;
    case 0x801B1AD0u:
        goto loc_801B1AD0;
        break;
    case 0x801B1AD8u:
        goto loc_801B1AD8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_801B18EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B18F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1944;
    }
}

loc_801B18F4:
{
    r0 = MemoryInline::FlatRead8((r7 + 336));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801B18FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1944;
    }
}

loc_801B1900:
{
    r0 = 1;
    r3 = 0x80250000u;
    r5 = 0x801B0000u;
    MemoryInline::FlatWriteRam8((r7 + 344), static_cast<uint8_t>(r0));
    r3 = (r3 + 11768);
    r4 = (r7 + 336);
    r5 = (r5 + 6316);
    r6 = (r7 + 148);
    ctx->lr = 0x801B1924u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019C448u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B1928:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1B34;
    }
}

loc_801B192C:
{
    goto loc_801B1BCC;
}

loc_801B1930:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B1934:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1944;
    }
}

loc_801B1938:
{
    r0 = MemoryInline::FlatRead8((r7 + 343));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(63));
}

loc_801B1940:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1A1C;
    }
}

loc_801B1944:
{
    r0 = 2;
    r3 = 0x80250000u;
    r4 = 0x801B0000u;
    MemoryInline::FlatWriteRam8((r7 + 344), static_cast<uint8_t>(r0));
    r3 = (r3 + 11768);
    r5 = (r7 + 148);
    r4 = (r4 + 6316);
    ctx->lr = 0x801B1964u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019B6E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B1968:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1B34;
    }
}

loc_801B196C:
{
    goto loc_801B1BCC;
}

loc_801B1970:
{
    r0 = 3;
    r3 = 0x80250000u;
    r5 = 0x801B0000u;
    MemoryInline::FlatWriteRam8((r7 + 344), static_cast<uint8_t>(r0));
    r3 = (r3 + 11752);
    r4 = (r7 + 336);
    r5 = (r5 + 6316);
    r6 = (r7 + 148);
    ctx->lr = 0x801B1994u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019E7B4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B1998:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1B34;
    }
}

loc_801B199C:
{
    goto loc_801B1BCC;
}

loc_801B19A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B19A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B19B4;
    }
}

loc_801B19A8:
{
    r0 = MemoryInline::FlatRead8((r7 + 336));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801B19B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B19E8;
    }
}

loc_801B19B4:
{
    r0 = 4;
    r3 = 0x80250000u;
    r6 = 0x801B0000u;
    MemoryInline::FlatWriteRam8((r7 + 344), static_cast<uint8_t>(r0));
    r3 = (r3 + 11752);
    r7 = (r7 + 148);
    r6 = (r6 + 6316);
    r4 = 63;
    r5 = 0;
    ctx->lr = 0x801B19DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019BCC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B19E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1B34;
    }
}

loc_801B19E4:
{
    goto loc_801B1BCC;
}

loc_801B19E8:
{
    r0 = 5;
    r3 = 0x80250000u;
    r6 = 0x801B0000u;
    MemoryInline::FlatWriteRam8((r7 + 344), static_cast<uint8_t>(r0));
    r3 = (r3 + 11768);
    r7 = (r7 + 148);
    r6 = (r6 + 6316);
    r4 = 63;
    r5 = 0;
    ctx->lr = 0x801B1A10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019B524u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B1A14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1B34;
    }
}

loc_801B1A18:
{
    goto loc_801B1BCC;
}

loc_801B1A1C:
{
    r0 = 6;
    r3 = 0x80250000u;
    r6 = 0x801B0000u;
    MemoryInline::FlatWriteRam8((r7 + 344), static_cast<uint8_t>(r0));
    r4 = (r7 + 8);
    r3 = (r3 + 11768);
    r6 = (r6 + 6316);
    r7 = (r7 + 148);
    r5 = 2;
    ctx->lr = 0x801B1A44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019C990u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B1A48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1B34;
    }
}

loc_801B1A4C:
{
    goto loc_801B1BCC;
}

loc_801B1A50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B1A54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1B34;
    }
}

loc_801B1A58:
{
    r3 = 1;
    r0 = 7;
    r4 = 0x80350000u;
    r6 = 0x801B0000u;
    MemoryInline::FlatWriteRam8((r7 + 345), static_cast<uint8_t>(r3));
    r3 = (r7 + 8);
    r5 = MemoryInline::FlatRead32((r7 + 396));
    r4 = (r4 + -15360);
    MemoryInline::FlatWriteRam8((r7 + 344), static_cast<uint8_t>(r0));
    r6 = (r6 + 6316);
    r7 = (r7 + 148);
    ctx->lr = 0x801B1A88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019B8ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B1A8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1B34;
    }
}

loc_801B1A90:
{
    goto loc_801B1BCC;
}

loc_801B1A94:
{
    r0 = MemoryInline::FlatRead32((r7 + 396));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801B1A9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1B34;
    }
}

loc_801B1AA0:
{
    r3 = 0;
    r0 = 8;
    r4 = 0x801B0000u;
    MemoryInline::FlatWriteRam8((r7 + 345), static_cast<uint8_t>(r3));
    r3 = (r7 + 8);
    r5 = (r7 + 148);
    MemoryInline::FlatWriteRam8((r7 + 344), static_cast<uint8_t>(r0));
    r4 = (r4 + 6316);
    ctx->lr = 0x801B1AC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019CAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B1AC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B1B34;
    }
}

loc_801B1ACC:
{
    goto loc_801B1BCC;
}

loc_801B1AD0:
{
}

loc_801B1AD4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801B1B34;
    }
}

loc_801B1AD8:
{
    r30 = 0x80350000u;
    r30 = (r30 + -32160);
    r0 = MemoryInline::FlatRead32((r30 + 392));
}

loc_801B1AE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B1AF4;
    }
}

loc_801B1AEC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -25123), static_cast<uint8_t>(r0));
}

loc_801B1AF4:
{
    r12 = MemoryInline::FlatRead32((r30 + 388));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801B1AFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1B28;
    }
}

loc_801B1B00:
{
    r31 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 392));
    MemoryInline::FlatWriteRam32((r30 + 388), r31);
    ctr = r12;
    ctx->lr = 0x801B1B14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801B1B1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1B28;
    }
}

loc_801B1B20:
{
    r3 = r30;
    ctx->lr = 0x801B1B28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801AAAA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B1B28:
{
    r0 = MemoryInline::FlatRead32((r30 + 392));
    MemoryInline::FlatWrite8((r13 + -25144), static_cast<uint8_t>(r0));
    goto loc_801B1BCC;
}

loc_801B1B34:
{
    r5 = 0x80350000u;
    r3 = 2;
    r5 = (r5 + -32160);
    r0 = MemoryInline::FlatRead8((r5 + 345));
    MemoryInline::FlatWriteRam32((r5 + 392), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B1B4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1B74;
    }
}

loc_801B1B50:
{
    r0 = 9;
    r4 = 0x801B0000u;
    MemoryInline::FlatWriteRam8((r5 + 344), static_cast<uint8_t>(r0));
    r3 = (r5 + 8);
    r4 = (r4 + 6316);
    r5 = (r5 + 148);
    ctx->lr = 0x801B1B6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019CAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B1B70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1BCC;
    }
}

loc_801B1B74:
{
    r30 = 0x80350000u;
    r30 = (r30 + -32160);
    r0 = MemoryInline::FlatRead32((r30 + 392));
}

loc_801B1B84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B1B90;
    }
}

loc_801B1B88:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -25123), static_cast<uint8_t>(r0));
}

loc_801B1B90:
{
    r12 = MemoryInline::FlatRead32((r30 + 388));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801B1B98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1BC4;
    }
}

loc_801B1B9C:
{
    r31 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 392));
    MemoryInline::FlatWriteRam32((r30 + 388), r31);
    ctr = r12;
    ctx->lr = 0x801B1BB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801B1BB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1BC4;
    }
}

loc_801B1BBC:
{
    r3 = r30;
    ctx->lr = 0x801B1BC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801AAAA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B1BC4:
{
    r0 = MemoryInline::FlatRead32((r30 + 392));
    MemoryInline::FlatWrite8((r13 + -25144), static_cast<uint8_t>(r0));
}

loc_801B1BCC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801B18AC func_801B18AC preserves=true fpr_mask=0x00000000
