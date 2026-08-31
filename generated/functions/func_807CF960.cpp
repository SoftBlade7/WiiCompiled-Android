#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CF960(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807CF960;

loc_807CF960:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r4 = 1;
}

loc_807CF96C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CF980;
    }
}

loc_807CF970:
{
    r0 = MemoryInline::FlatRead8((r3 + 76));
}

loc_807CF978:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CF980;
    }
}

loc_807CF97C:
{
    r4 = 0;
}

loc_807CF980:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r3 = 31;
}

loc_807CF98C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_807CF9AC;
    }
}

loc_807CF990:
{
}

loc_807CF994:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_807CF9C0;
    }
}

loc_807CF998:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_807CF99C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF9D4;
    }
}

loc_807CF9A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807CF9A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CF9DC;
    }
}

loc_807CF9A8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_807CF9AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807CF9B0:
{
    r3 = 34;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807CF9B8:
{
    r3 = 31;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_807CF9C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807CF9C4:
{
    r3 = 35;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807CF9CC:
{
    r3 = 32;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_807CF9D4:
{
    r3 = 35;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_807CF9DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807CF9E0:
{
    r3 = 36;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807CF9E8:
{
    r3 = 33;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807CF960 func_807CF960 preserves=true fpr_mask=0x00000000
