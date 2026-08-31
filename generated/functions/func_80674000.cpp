#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80674000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80674000;

loc_80674000:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r4 * 112);
    r4 = 5;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    MemoryInline::FlatWrite32((r3 + 16900), r5);
    r5 = 10240;
    MemoryInline::FlatWrite32((r3 + 16896), r4);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 30116));
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 16908), r0);
    r3 = (r3 + 16912);
    ctx->lr = 0x80674044u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r0 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80674054:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067408C;
    }
}

loc_80674058:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8067405C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674094;
    }
}

loc_80674060:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80674064:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8067409C;
    }
}

loc_80674068:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8067406C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806740A4;
    }
}

loc_80674070:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80674074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806740AC;
    }
}

loc_80674078:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8067407C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806740B4;
    }
}

loc_80674080:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80674084:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806740BC;
    }
}

loc_80674088:
{
    goto loc_806740C4;
}

loc_8067408C:
{
    r5 = 1;
    goto loc_806740C8;
}

loc_80674094:
{
    r5 = 2;
    goto loc_806740C8;
}

loc_8067409C:
{
    r5 = 3;
    goto loc_806740C8;
}

loc_806740A4:
{
    r5 = 4;
    goto loc_806740C8;
}

loc_806740AC:
{
    r5 = 5;
    goto loc_806740C8;
}

loc_806740B4:
{
    r5 = 6;
    goto loc_806740C8;
}

loc_806740BC:
{
    r5 = 7;
    goto loc_806740C8;
}

loc_806740C4:
{
    r5 = 1;
}

loc_806740C8:
{
    r3 = 0x809C0000u;
    r31 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 8464));
    r6 = 1;
    r3 = MemoryInline::FlatRead32((r31 + 8512));
    r4 = (r4 + 92);
    ctx->lr = 0x806740E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806773C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 8512));
    r5 = (r30 + 16912);
    r4 = MemoryInline::FlatRead32((r30 + 16908));
    r6 = (r30 + 16904);
    ctx->lr = 0x806740F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80677880u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806740FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674128;
    }
}

loc_80674100:
{
    r5 = 0;
    r4 = 1;
    r0 = 7;
    MemoryInline::FlatWrite32((r30 + 20), r5);
    r3 = 1;
    MemoryInline::FlatWrite32((r30 + 16), r4);
    MemoryInline::FlatWrite32((r30 + 30072), r0);
    MemoryInline::FlatWrite8((r30 + 40), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r30 + 24), r5);
    goto loc_8067413C;
}

loc_80674128:
{
    r3 = r30;
    ctx->lr = 0x80674130u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067552Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 8512));
    ctx->lr = 0x80674138u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067721Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
}

loc_8067413C:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80674000 func_80674000 preserves=true fpr_mask=0x00000000
