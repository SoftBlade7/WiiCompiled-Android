#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80854754(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80854754;

loc_80854754:
{
}

loc_80854758:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(12))) {
        goto loc_8085477C;
    }
}

loc_8085475C:
{
}

loc_80854760:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_80854770;
    }
}

loc_80854764:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80854768:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085478C;
    }
}

loc_8085476C:
{
    goto loc_808547E8;
}

loc_80854770:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(8));
}

loc_80854774:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808547B4;
    }
}

loc_80854778:
{
    goto loc_808547A0;
}

loc_8085477C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(16));
}

loc_80854780:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808547DC;
    }
}

loc_80854784:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808547E8;
    }
}

loc_80854788:
{
    goto loc_808547C8;
}

loc_8085478C:
{
    r4 = (r4 + 3411);
    r0 = 8100;
    MemoryInline::FlatWrite32((r3 + 824), r4);
    MemoryInline::FlatWrite32((r3 + 996), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_808547A0:
{
    r4 = (r4 + 3407);
    r0 = 8101;
    MemoryInline::FlatWrite32((r3 + 824), r4);
    MemoryInline::FlatWrite32((r3 + 996), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_808547B4:
{
    r4 = (r4 + 3403);
    r0 = 8102;
    MemoryInline::FlatWrite32((r3 + 824), r4);
    MemoryInline::FlatWrite32((r3 + 996), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_808547C8:
{
    r4 = (r4 + 3399);
    r0 = 8103;
    MemoryInline::FlatWrite32((r3 + 824), r4);
    MemoryInline::FlatWrite32((r3 + 996), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_808547DC:
{
    r0 = 8104;
    MemoryInline::FlatWrite32((r3 + 996), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_808547E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(17));
}

loc_808547EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80854804;
    }
}

loc_808547F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(36));
}

loc_808547F4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80854804;
    }
}

loc_808547F8:
{
    r0 = (r4 + 8093);
    MemoryInline::FlatWrite32((r3 + 996), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80854804:
{
    r0 = (r4 + 8103);
    MemoryInline::FlatWrite32((r3 + 996), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80854754 func_80854754 preserves=true fpr_mask=0x00000000
