#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BC540(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800BC540;

loc_800BC540:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_800BC54C:
{
    r0 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BC554:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800BC560;
    }
}

loc_800BC558:
{
    r0 = MemoryInline::FlatRead32((r13 + -32292));
    goto loc_800BC5B8;
}

loc_800BC560:
{
    ctx->lr = 0x800BC564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800BD860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800BC568:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC574;
    }
}

loc_800BC56C:
{
    r0 = 6;
    goto loc_800BC5B8;
}

loc_800BC574:
{
    r5 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = (r13 + -26976);
}

loc_800BC580:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800BC588;
    }
}

loc_800BC584:
{
    r3 = (r5 + 6972);
}

loc_800BC588:
{
    r4 = MemoryInline::FlatRead8(r3);
    r3 = 1;
    r0 = (r4 & 4);
}

loc_800BC594:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC5A4;
    }
}

loc_800BC598:
{
    r0 = (r4 & 8);
}

loc_800BC59C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC5A4;
    }
}

loc_800BC5A0:
{
    r3 = 0;
}

loc_800BC5A4:
{
}

loc_800BC5A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BC5B4;
    }
}

loc_800BC5AC:
{
    r0 = 5;
    goto loc_800BC5B8;
}

loc_800BC5B4:
{
    r0 = MemoryInline::FlatRead32((r5 + 6976));
}

loc_800BC5B8:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_800BC5C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC54C;
    }
}

loc_800BC5C8:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800BC540 func_800BC540 preserves=true fpr_mask=0x00000000
