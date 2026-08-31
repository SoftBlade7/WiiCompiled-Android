#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80141E7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80141E7C;

loc_80141E7C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 118));
    r0 = (r0 & 8);
}

loc_80141EA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141EB0;
    }
}

loc_80141EA4:
{
    r0 = MemoryInline::FlatRead16((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_80141EAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80141F48;
    }
}

loc_80141EB0:
{
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    r0 = MemoryInline::FlatRead32((r4 + 6412));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80141EC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80141ECC;
    }
}

loc_80141EC4:
{
    r3 = 4;
    goto loc_80141F80;
}

loc_80141ECC:
{
    r4 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80141ED4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80141EF8;
    }
}

loc_80141ED8:
{
    r0 = MemoryInline::FlatRead8((r3 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80141EE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80141EEC;
    }
}

loc_80141EE4:
{
    r6 = (r4 + 16);
    goto loc_80141EF0;
}

loc_80141EEC:
{
    r6 = (r4 + 38);
}

loc_80141EF0:
{
    r7 = MemoryInline::FlatRead8((r4 + 15));
    goto loc_80141EFC;
}

loc_80141EF8:
{
    r7 = 0;
}

loc_80141EFC:
{
    r0 = 4;
    r4 = 0x80330000u;
    MemoryInline::FlatWrite8((r3 + 127), static_cast<uint8_t>(r0));
    r4 = (r4 + 25208);
    r5 = (r3 + 53);
    r8 = MemoryInline::FlatRead8((r3 + 128));
    r12 = MemoryInline::FlatRead32((r4 + 6412));
    r4 = (r3 + 34);
    ctr = r12;
    r3 = (r3 + 28);
    ctx->lr = 0x80141F28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80141F2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80141F80;
    }
}

loc_80141F30:
{
    r4 = MemoryInline::FlatRead8((r30 + 118));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 127), static_cast<uint8_t>(r0));
    r0 = (r4 | 1);
    MemoryInline::FlatWrite8((r30 + 118), static_cast<uint8_t>(r0));
    goto loc_80141F80;
}

loc_80141F48:
{
    r31 = MemoryInline::FlatRead8((r3 + 127));
    r0 = 3;
    r4 = 0;
    r5 = 2;
    MemoryInline::FlatWrite8((r3 + 127), static_cast<uint8_t>(r0));
    r6 = 30;
    r7 = 0;
    r3 = (r3 + 28);
    ctx->lr = 0x80141F6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013D2D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80141F74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80141F7C;
    }
}

loc_80141F78:
{
    MemoryInline::FlatWrite8((r30 + 127), static_cast<uint8_t>(r31));
}

loc_80141F7C:
{
    r3 = 1;
}

loc_80141F80:
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
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80141E7C func_80141E7C preserves=true fpr_mask=0x00000000
