#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061BDBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8061BDBC;

loc_8061BDBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8061BDC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061BDE8;
    }
}

loc_8061BDC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8061BDC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061BDF8;
    }
}

loc_8061BDCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8061BDD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061BE08;
    }
}

loc_8061BDD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_8061BDD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061BE18;
    }
}

loc_8061BDDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_8061BDE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061BE28;
    }
}

loc_8061BDE4:
{
    goto loc_8061BE38;
}

loc_8061BDE8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + 4);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8061BDF8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + 240);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8061BE08:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + 476);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8061BE18:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + 712);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8061BE28:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = (r3 + 5556);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8061BE38:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8061BDBC func_8061BDBC preserves=true fpr_mask=0x00000000
