#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E8178(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E8178;

loc_805E8178:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_805E81A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E81B0;
    }
}

loc_805E81A8:
{
    r3 = 0;
    goto loc_805E8268;
}

loc_805E81B0:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_805E81B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E81C4;
    }
}

loc_805E81BC:
{
    r3 = 1;
    goto loc_805E8268;
}

loc_805E81C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_805E81CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E81D8;
    }
}

loc_805E81D0:
{
    r3 = 0;
    goto loc_805E8268;
}

loc_805E81D8:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_805E81E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E81EC;
    }
}

loc_805E81E4:
{
    r3 = 1;
    goto loc_805E8268;
}

loc_805E81EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_805E81F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E8200;
    }
}

loc_805E81F8:
{
    r3 = 0;
    goto loc_805E8268;
}

loc_805E8200:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_805E8208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E8214;
    }
}

loc_805E820C:
{
    r3 = 1;
    goto loc_805E8268;
}

loc_805E8214:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_805E821C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E8228;
    }
}

loc_805E8220:
{
    r3 = 0;
    goto loc_805E8268;
}

loc_805E8228:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_805E8230:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E823C;
    }
}

loc_805E8234:
{
    r3 = 1;
    goto loc_805E8268;
}

loc_805E823C:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_805E8244:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E8250;
    }
}

loc_805E8248:
{
    r3 = 0;
    goto loc_805E8268;
}

loc_805E8250:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E8258:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E8264;
    }
}

loc_805E825C:
{
    r3 = 1;
    goto loc_805E8268;
}

loc_805E8264:
{
    ctx->lr = 0x805E8268u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E7700u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_805E8268:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E826C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E827C;
    }
}

loc_805E8270:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = r31;
    ctx->lr = 0x805E827Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805FBB60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805E827C:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805E8178 func_805E8178 preserves=true fpr_mask=0x00000000
