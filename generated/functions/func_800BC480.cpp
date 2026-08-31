#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BC480(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800BC480;

loc_800BC480:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800BC494:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800BC4A0;
    }
}

loc_800BC498:
{
    r3 = MemoryInline::FlatRead32((r13 + -32292));
    goto loc_800BC4F8;
}

loc_800BC4A0:
{
    ctx->lr = 0x800BC4A4u;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800BC4A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC4B4;
    }
}

loc_800BC4AC:
{
    r3 = 6;
    goto loc_800BC4F8;
}

loc_800BC4B4:
{
    r5 = MemoryInline::FlatRead32((r13 + -26984));
    r3 = (r13 + -26976);
}

loc_800BC4C0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800BC4C8;
    }
}

loc_800BC4C4:
{
    r3 = (r5 + 6972);
}

loc_800BC4C8:
{
    r4 = MemoryInline::FlatRead8(r3);
    r3 = 1;
    r0 = (r4 & 4);
}

loc_800BC4D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC4E4;
    }
}

loc_800BC4D8:
{
    r0 = (r4 & 8);
}

loc_800BC4DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BC4E4;
    }
}

loc_800BC4E0:
{
    r3 = 0;
}

loc_800BC4E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800BC4E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BC4F4;
    }
}

loc_800BC4EC:
{
    r3 = 5;
    goto loc_800BC4F8;
}

loc_800BC4F4:
{
    r3 = MemoryInline::FlatRead32((r5 + 6976));
}

loc_800BC4F8:
{
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
// RECOMP_REGISTRATION base 0x800BC480 func_800BC480 preserves=true fpr_mask=0x00000000
