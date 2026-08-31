#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010EF58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8010EF58;

loc_8010EF58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8010EF64:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8010EF7C;
    }
}

loc_8010EF78:
{
    r30 = MemoryInline::FlatRead32((r13 + -30432));
}

loc_8010EF7C:
{
    r0 = MemoryInline::FlatRead32((r30 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010EF84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010EF90;
    }
}

loc_8010EF88:
{
    r3 = r30;
    ctx->lr = 0x8010EF90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8010F12Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8010EF90:
{
    r3 = r30;
    ctx->lr = 0x8010EF98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8010F070u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = 0;
    ctx->lr = 0x8010EFA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 40;
    r4 = 0;
    ctr = r0;
}

loc_8010EFAC:
{
    r0 = MemoryInline::FlatRead32((r30 + 280));
}

loc_8010EFB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010EFCC;
    }
}

loc_8010EFB8:
{
    r0 = MemoryInline::FlatRead32((r30 + 288));
    r0 = (r3 - r0);
}

loc_8010EFC4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4000))) {
        goto loc_8010EFCC;
    }
}

loc_8010EFC8:
{
    MemoryInline::FlatWrite32((r30 + 280), r4);
}

loc_8010EFCC:
{
    r0 = MemoryInline::FlatRead32((r30 + 296));
}

loc_8010EFD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010EFEC;
    }
}

loc_8010EFD8:
{
    r0 = MemoryInline::FlatRead32((r30 + 304));
    r0 = (r3 - r0);
}

loc_8010EFE4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4000))) {
        goto loc_8010EFEC;
    }
}

loc_8010EFE8:
{
    MemoryInline::FlatWrite32((r30 + 296), r4);
}

loc_8010EFEC:
{
    r0 = MemoryInline::FlatRead32((r30 + 312));
}

loc_8010EFF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010F00C;
    }
}

loc_8010EFF8:
{
    r0 = MemoryInline::FlatRead32((r30 + 320));
    r0 = (r3 - r0);
}

loc_8010F004:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4000))) {
        goto loc_8010F00C;
    }
}

loc_8010F008:
{
    MemoryInline::FlatWrite32((r30 + 312), r4);
}

loc_8010F00C:
{
    r0 = MemoryInline::FlatRead32((r30 + 328));
}

loc_8010F014:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010F02C;
    }
}

loc_8010F018:
{
    r0 = MemoryInline::FlatRead32((r30 + 336));
    r0 = (r3 - r0);
}

loc_8010F024:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4000))) {
        goto loc_8010F02C;
    }
}

loc_8010F028:
{
    MemoryInline::FlatWrite32((r30 + 328), r4);
}

loc_8010F02C:
{
    r0 = MemoryInline::FlatRead32((r30 + 344));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010F034:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010F04C;
    }
}

loc_8010F038:
{
    r0 = MemoryInline::FlatRead32((r30 + 352));
    r0 = (r3 - r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4000));
}

loc_8010F044:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8010F04C;
    }
}

loc_8010F048:
{
    MemoryInline::FlatWrite32((r30 + 344), r4);
}

loc_8010F04C:
{
    r30 = (r30 + 80);
    r31 = (r31 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8010EFAC;
    }
}

loc_8010F058:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8010EF58 func_8010EF58 preserves=true fpr_mask=0x00000000
