#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80632080(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80632080;

loc_80632080:
{
}

loc_80632084:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(104))) {
        goto loc_806320D4;
    }
}

loc_80632088:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(15));
}

loc_8063208C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063213C;
    }
}

loc_80632090:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806320AC;
    }
}

loc_80632094:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(13));
}

loc_80632098:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8063212C;
    }
}

loc_8063209C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632134;
    }
}

loc_806320A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806320A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632124;
    }
}

loc_806320A8:
{
    goto loc_806321AC;
}

loc_806320AC:
{
}

loc_806320B0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(50))) {
        goto loc_806320C8;
    }
}

loc_806320B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(30));
}

loc_806320B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632154;
    }
}

loc_806320BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(25));
}

loc_806320C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063214C;
    }
}

loc_806320C4:
{
    goto loc_80632144;
}

loc_806320C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(59));
}

loc_806320CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632164;
    }
}

loc_806320D0:
{
    goto loc_8063215C;
}

loc_806320D4:
{
}

loc_806320D8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(120))) {
        goto loc_80632104;
    }
}

loc_806320DC:
{
}

loc_806320E0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(110))) {
        goto loc_806320F8;
    }
}

loc_806320E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(108));
}

loc_806320E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063217C;
    }
}

loc_806320EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(106));
}

loc_806320F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632174;
    }
}

loc_806320F4:
{
    goto loc_8063216C;
}

loc_806320F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(112));
}

loc_806320FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063218C;
    }
}

loc_80632100:
{
    goto loc_80632184;
}

loc_80632104:
{
}

loc_80632108:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(173))) {
        goto loc_80632118;
    }
}

loc_8063210C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(149));
}

loc_80632110:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8063219C;
    }
}

loc_80632114:
{
    goto loc_80632194;
}

loc_80632118:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(179));
}

loc_8063211C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806321AC;
    }
}

loc_80632120:
{
    goto loc_806321A4;
}

loc_80632124:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063212C:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632134:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063213C:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632144:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063214C:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632154:
{
    r3 = 3;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063215C:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632164:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063216C:
{
    r3 = 3;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632174:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063217C:
{
    r3 = 3;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632184:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063218C:
{
    r3 = 3;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632194:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8063219C:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806321A4:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806321AC:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80632080_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80632080;

loc_80632080:
{
}

loc_80632084:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(104))) {
        goto loc_806320D4;
    }
}

loc_80632088:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(15));
}

loc_8063208C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8063213C;
    }
}

loc_80632090:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806320AC;
    }
}

loc_80632094:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(13));
}

loc_80632098:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8063212C;
    }
}

loc_8063209C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632134;
    }
}

loc_806320A0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_806320A4:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632124;
    }
}

loc_806320A8:
{
    goto loc_806321AC;
}

loc_806320AC:
{
}

loc_806320B0:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(50))) {
        goto loc_806320C8;
    }
}

loc_806320B4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(30));
}

loc_806320B8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632154;
    }
}

loc_806320BC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(25));
}

loc_806320C0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_8063214C;
    }
}

loc_806320C4:
{
    goto loc_80632144;
}

loc_806320C8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(59));
}

loc_806320CC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632164;
    }
}

loc_806320D0:
{
    goto loc_8063215C;
}

loc_806320D4:
{
}

loc_806320D8:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(120))) {
        goto loc_80632104;
    }
}

loc_806320DC:
{
}

loc_806320E0:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(110))) {
        goto loc_806320F8;
    }
}

loc_806320E4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(108));
}

loc_806320E8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_8063217C;
    }
}

loc_806320EC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(106));
}

loc_806320F0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632174;
    }
}

loc_806320F4:
{
    goto loc_8063216C;
}

loc_806320F8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(112));
}

loc_806320FC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_8063218C;
    }
}

loc_80632100:
{
    goto loc_80632184;
}

loc_80632104:
{
}

loc_80632108:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(173))) {
        goto loc_80632118;
    }
}

loc_8063210C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(149));
}

loc_80632110:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_8063219C;
    }
}

loc_80632114:
{
    goto loc_80632194;
}

loc_80632118:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(179));
}

loc_8063211C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_806321AC;
    }
}

loc_80632120:
{
    goto loc_806321A4;
}

loc_80632124:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063212C:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632134:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063213C:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632144:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063214C:
{
    cached_r3 = 2;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632154:
{
    cached_r3 = 3;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063215C:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632164:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063216C:
{
    cached_r3 = 3;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632174:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063217C:
{
    cached_r3 = 3;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632184:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063218C:
{
    cached_r3 = 3;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632194:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8063219C:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806321A4:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_806321AC:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80632080 symbol=func_80632080_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80632080 func_80632080 preserves=true fpr_mask=0x00000000

