#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80650FB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r15 = ctx->gpr[15];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80650FB8;

loc_80650FB8:
{
}

loc_80650FBC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(96))) {
        goto loc_80650FC8;
    }
}

loc_80650FC0:
{
}

loc_80650FC4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(97))) {
        goto loc_80650FE8;
    }
}

loc_80650FC8:
{
}

loc_80650FCC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(100))) {
        goto loc_80650FD8;
    }
}

loc_80650FD0:
{
}

loc_80650FD4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(101))) {
        goto loc_80650FE8;
    }
}

loc_80650FD8:
{
}

loc_80650FDC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(88))) {
        goto loc_80650FE8;
    }
}

loc_80650FE0:
{
}

loc_80650FE4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(94))) {
        goto loc_80650FF0;
    }
}

loc_80650FE8:
{
    r0 = MemoryInline::FlatRead32((r15 + 648));
    goto loc_80650FF4;
}

loc_80650FF0:
{
    r0 = 0;
}

loc_80650FF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80650FF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80651010;
    }
}

loc_80650FFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80651000:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80651034;
    }
}

loc_80651004:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80651008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80651058;
    }
}

loc_8065100C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065114Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80651010:
{
    r4 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065114Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80651034:
{
    r4 = 0x809C0000u;
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065114Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80651058:
{
    r4 = 0x809C0000u;
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065114Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80650FB8 func_80650FB8 preserves=true fpr_mask=0x00000000
