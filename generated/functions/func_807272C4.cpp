#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807272C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807272C4;

loc_807272C4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0;
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 328));
    MemoryInline::FlatWrite32((r3 + 332), r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807272EC:
{
    MemoryInline::FlatWrite32((r3 + 336), r5);
    MemoryInline::FlatWrite8((r3 + 344), static_cast<uint8_t>(r4));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80727310;
    }
}

loc_807272F8:
{
    r4 = (r3 + 284);
    r5 = (r3 + 296);
    r6 = (r3 + 308);
    ctx->lr = 0x80727308u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80726D14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r31 + 348), f1.d);
    goto loc_8072732C;
}

loc_80727310:
{
    r4 = (r3 + 284);
    r5 = (r3 + 296);
    r6 = (r3 + 308);
    ctx->lr = 0x80727320u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80726BF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 320));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 348), f0.d);
}

loc_8072732C:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 348));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 9160));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8072733C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80727348;
    }
}

loc_80727340:
{
    f1.d = f0.d;
    goto loc_8072735C;
}

loc_80727348:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 9164));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80727354:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072735C;
    }
}

loc_80727358:
{
    f1.d = f0.d;
}

loc_8072735C:
{
    MemoryInline::FlatWriteFloat32((r31 + 348), f1.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000003E gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807272C4 func_807272C4 preserves=true fpr_mask=0x00000000
