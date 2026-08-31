#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80722E54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80722E54;

loc_80722E54:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    // inline leaf 0x80518B78 (14 guest instruction(s))
}

loc_inl0_0x80518B78:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
}

loc_inl0_0x80518B80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80518BA8;
    }
}

loc_inl0_0x80518B84:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80518B8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80518BA8;
    }
}

loc_inl0_0x80518B90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80518BA0;
    }
}

loc_inl0_0x80518B94:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_80518B78;
}

loc_inl0_0x80518BA0:
{
    r3 = 0;
    goto loc_inl0_cont_80518B78;
}

loc_inl0_0x80518BA8:
{
    r3 = 0;
}

loc_inl0_cont_80518B78:
{
    // end of inlined leaf 0x80518B78
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80722E70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80722E8C;
    }
}

loc_80722E74:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80722E80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80722E8C;
    }
}

loc_80722E84:
{
    r3 = 0;
    goto loc_80722E90;
}

loc_80722E8C:
{
    r3 = 1;
}

loc_80722E90:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80722E54 func_80722E54 preserves=true fpr_mask=0x00000000
