#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806A326C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806A326C;

loc_806A326C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_806A3278:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_806A32E0;
    }
}

loc_806A3288:
{
    r0 = MemoryInline::FlatRead8((r3 + 1978));
}

loc_806A3290:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806A32A4;
    }
}

loc_806A3294:
{
    r4 = MemoryInline::FlatRead32((r3 + 132));
    r0 = MemoryInline::FlatRead8((r3 + 2784));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806A32A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806A339C;
    }
}

loc_806A32A4:
{
    r3 = MemoryInline::FlatRead32((r3 + 1556));
    r31 = 7;
    r30 = (r3 + 28);
}

loc_806A32B0:
{
    r3 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806A32B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A32CC;
    }
}

loc_806A32BC:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x806A32CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806A32CC:
{
    r31 = (r31 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(10));
}

loc_806A32D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806A32B0;
    }
}

loc_806A32DC:
{
    goto loc_806A339C;
}

loc_806A32E0:
{
}

loc_806A32E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_806A3340;
    }
}

loc_806A32E8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1978));
}

loc_806A32F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806A3304;
    }
}

loc_806A32F4:
{
    r4 = MemoryInline::FlatRead32((r3 + 132));
    r0 = MemoryInline::FlatRead8((r3 + 2784));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806A3300:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806A339C;
    }
}

loc_806A3304:
{
    r3 = MemoryInline::FlatRead32((r3 + 1556));
    r31 = 10;
    r30 = (r3 + 40);
}

loc_806A3310:
{
    r3 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806A3318:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A332C;
    }
}

loc_806A331C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x806A332Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806A332C:
{
    r31 = (r31 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(13));
}

loc_806A3338:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806A3310;
    }
}

loc_806A333C:
{
    goto loc_806A339C;
}

loc_806A3340:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806A3344:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A339C;
    }
}

loc_806A3348:
{
    r0 = MemoryInline::FlatRead8((r3 + 1978));
}

loc_806A3350:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806A3364;
    }
}

loc_806A3354:
{
    r4 = MemoryInline::FlatRead32((r3 + 132));
    r0 = MemoryInline::FlatRead8((r3 + 2784));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806A3360:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806A339C;
    }
}

loc_806A3364:
{
    r3 = MemoryInline::FlatRead32((r3 + 1556));
    r31 = 13;
    r30 = (r3 + 52);
}

loc_806A3370:
{
    r3 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806A3378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A338C;
    }
}

loc_806A337C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x806A338Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806A338C:
{
    r31 = (r31 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(16));
}

loc_806A3398:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806A3370;
    }
}

loc_806A339C:
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806A326C func_806A326C preserves=true fpr_mask=0x00000000
