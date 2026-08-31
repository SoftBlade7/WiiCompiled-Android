#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806211DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806211DC;

loc_806211DC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    goto loc_80621228;
}

loc_80621200:
{
    r3 = MemoryInline::FlatRead32((r30 + -10424));
    r31 = (r3 + 131072);
    goto loc_80621210;
}

loc_8062120C:
{
    ctx->lr = 0x80621210u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B99ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80621210:
{
    r0 = MemoryInline::FlatRead8((r31 + 20480));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80621218:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8062120C;
    }
}

loc_8062121C:
{
    r0 = MemoryInline::FlatRead32((r31 + 20484));
    r3 = r29;
    ctx->lr = 0x80621228u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80620DD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80621228:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80621230:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806212E0;
    }
}

loc_80621234:
{
    r0 = MemoryInline::FlatRead8((r29 + 20));
}

loc_8062123C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80621248;
    }
}

loc_80621240:
{
    r0 = 0;
    goto loc_806212D8;
}

loc_80621248:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_80621250:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_8062125C;
    }
}

loc_80621254:
{
    r0 = 1;
    goto loc_806212D8;
}

loc_8062125C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80621264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80621270;
    }
}

loc_80621268:
{
    r0 = 1;
    goto loc_806212D8;
}

loc_80621270:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_80621278:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80621284;
    }
}

loc_8062127C:
{
    r0 = 1;
    goto loc_806212D8;
}

loc_80621284:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_8062128C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80621298;
    }
}

loc_80621290:
{
    r0 = 1;
    goto loc_806212D8;
}

loc_80621298:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_806212A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806212AC;
    }
}

loc_806212A4:
{
    r0 = 1;
    goto loc_806212D8;
}

loc_806212AC:
{
    r0 = MemoryInline::FlatRead8((r29 + 4));
}

loc_806212B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806212C0;
    }
}

loc_806212B8:
{
    r0 = 1;
    goto loc_806212D8;
}

loc_806212C0:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_806212C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806212D4;
    }
}

loc_806212CC:
{
    r0 = 1;
    goto loc_806212D8;
}

loc_806212D4:
{
    r0 = 0;
}

loc_806212D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806212DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80621200;
    }
}

loc_806212E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806211DC func_806211DC preserves=true fpr_mask=0x00000000
