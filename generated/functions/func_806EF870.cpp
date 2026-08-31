#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806EF870(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806EF870;

loc_806EF870:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_806EF878:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_806EF8C0;
    }
}

loc_806EF87C:
{
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_806EF884:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806EF8C0;
    }
}

loc_806EF888:
{
    r0 = MemoryInline::FlatRead8((r3 + 68));
}

loc_806EF890:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_806EF8AC;
    }
}

loc_806EF894:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    r0 = (r4 + -2);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    goto loc_806EF8C0;
}

loc_806EF8AC:
{
    r4 = MemoryInline::FlatRead16((r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
    r0 = (r4 + 2);
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
}

loc_806EF8C0:
{
    r0 = MemoryInline::FlatRead8((r3 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806EF8C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_806EF8CC:
{
    r4 = MemoryInline::FlatRead16((r3 + 6));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 74), static_cast<uint8_t>(r0));
    r0 = (r4 + -1);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 72), static_cast<uint16_t>(r0));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 70), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806EF870 func_806EF870 preserves=true fpr_mask=0x00000000
