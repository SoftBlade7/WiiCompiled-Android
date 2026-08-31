#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C4DC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C4DC0;

loc_800C4DC0:
{
    r0 = (r3 & 32);
}

loc_800C4DC4:
{
    r4 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C4DD0;
    }
}

loc_800C4DCC:
{
    r4 = 2048;
}

loc_800C4DD0:
{
    r0 = (r3 & 64);
}

loc_800C4DD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C4DDC;
    }
}

loc_800C4DD8:
{
    r4 = (r4 + 8192);
}

loc_800C4DDC:
{
    r0 = (r3 & 128);
}

loc_800C4DE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C4DEC;
    }
}

loc_800C4DE4:
{
    r4 = (r4 + 65536);
    r4 = (r4 + -32768);
}

loc_800C4DEC:
{
    r0 = (r3 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C4DF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C4DF8;
    }
}

loc_800C4DF4:
{
    r4 = (r4 + 131072);
}

loc_800C4DF8:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_800C4DC0_statefree_v0(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_800C4DC0;

loc_800C4DC0:
{
    cached_r0 = (cached_r3 & 32);
}

loc_800C4DC4:
{
    cached_r4 = 0;
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_800C4DD0;
    }
}

loc_800C4DCC:
{
    cached_r4 = 2048;
}

loc_800C4DD0:
{
    cached_r0 = (cached_r3 & 64);
}

loc_800C4DD4:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_800C4DDC;
    }
}

loc_800C4DD8:
{
    cached_r4 = (cached_r4 + 8192);
}

loc_800C4DDC:
{
    cached_r0 = (cached_r3 & 128);
}

loc_800C4DE0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_800C4DEC;
    }
}

loc_800C4DE4:
{
    cached_r4 = (cached_r4 + 65536);
    cached_r4 = (cached_r4 + -32768);
}

loc_800C4DEC:
{
    cached_r0 = (cached_r3 & 256);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800C4DF0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4DF8;
    }
}

loc_800C4DF4:
{
    cached_r4 = (cached_r4 + 131072);
}

loc_800C4DF8:
{
    cached_r3 = cached_r4;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800C4DC0 symbol=func_800C4DC0_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_800C4DC0_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_800C4DC0;

loc_800C4DC0:
{
    cached_r0 = (cached_r3 & 32);
}

loc_800C4DC4:
{
    cached_r4 = 0;
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_800C4DD0;
    }
}

loc_800C4DCC:
{
    cached_r4 = 2048;
}

loc_800C4DD0:
{
    cached_r0 = (cached_r3 & 64);
}

loc_800C4DD4:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_800C4DDC;
    }
}

loc_800C4DD8:
{
    cached_r4 = (cached_r4 + 8192);
}

loc_800C4DDC:
{
    cached_r0 = (cached_r3 & 128);
}

loc_800C4DE0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_800C4DEC;
    }
}

loc_800C4DE4:
{
    cached_r4 = (cached_r4 + 65536);
    cached_r4 = (cached_r4 + -32768);
}

loc_800C4DEC:
{
    cached_r0 = (cached_r3 & 256);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800C4DF0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4DF8;
    }
}

loc_800C4DF4:
{
    cached_r4 = (cached_r4 + 131072);
}

loc_800C4DF8:
{
    cached_r3 = cached_r4;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800C4DC0 symbol=func_800C4DC0_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C4DC0 func_800C4DC0 preserves=true fpr_mask=0x00000000

