#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AB848(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AB848;

loc_801AB848:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x801B0000u;
    r3 = 0x801B0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + -17396);
    r3 = (r3 + -17400);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = MemoryInline::FlatRead32((r13 + -25292));
    MemoryInline::FlatWrite32((r13 + -25272), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AB87C:
{
    MemoryInline::FlatWrite32((r13 + -25268), r3);
    MemoryInline::FlatWrite32((r13 + -25296), r31);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AB890;
    }
}

loc_801AB888:
{
    r3 = 1;
    goto loc_801AB948;
}

loc_801AB890:
{
    r3 = 0x802A0000u;
    MemoryInline::FlatWrite32((r13 + -25276), r31);
    r4 = 0;
    r3 = (r3 + -14448);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801938F8u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AB8A8:
{
    MemoryInline::FlatWrite32((r13 + -25288), r3);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AB8BC;
    }
}

loc_801AB8B0:
{
    MemoryInline::FlatWrite32((r13 + -25292), r31);
    r3 = 0;
    goto loc_801AB948;
}

loc_801AB8BC:
{
    r3 = 0x802A0000u;
    r4 = 0;
    r3 = (r3 + -14428);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801938F8u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AB8D0:
{
    MemoryInline::FlatWrite32((r13 + -25284), r3);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AB8E4;
    }
}

loc_801AB8D8:
{
    MemoryInline::FlatWrite32((r13 + -25292), r31);
    r3 = 0;
    goto loc_801AB948;
}

loc_801AB8E4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    r5 = 0x80340000u;
    r7 = 0x80340000u;
    r9 = 0x801B0000u;
    r3 = MemoryInline::FlatRead32((r13 + -25284));
    r5 = (r5 + 32416);
    r7 = (r7 + 32448);
    r9 = (r9 + -17392);
    r4 = 4096;
    r6 = 32;
    r8 = 32;
    r10 = 0;
    ctx->lr = 0x801AB91Cu;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80194158u>(ctx);
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
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AB920:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AB930;
    }
}

loc_801AB924:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25280), r0);
    goto loc_801AB934;
}

loc_801AB930:
{
    MemoryInline::FlatWrite32((r13 + -25280), r31);
}

loc_801AB934:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    r3 = 1;
    MemoryInline::FlatWrite32((r13 + -25292), r0);
}

loc_801AB948:
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AB848 func_801AB848 preserves=true fpr_mask=0x00000000
