#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80175314(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80175314;

loc_80175314:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017532C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80175338;
    }
}

loc_80175330:
{
    r3 = 0;
    goto loc_80175400;
}

loc_80175338:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80175340:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017534C;
    }
}

loc_80175344:
{
    r3 = 1;
    goto loc_80175400;
}

loc_8017534C:
{
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80175354:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80175360;
    }
}

loc_80175358:
{
    r3 = 0;
    goto loc_80175400;
}

loc_80175360:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80175368:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80175374;
    }
}

loc_8017536C:
{
    r3 = 1;
    goto loc_80175400;
}

loc_80175374:
{
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017537C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80175388;
    }
}

loc_80175380:
{
    r3 = 0;
    goto loc_80175400;
}

loc_80175388:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80175390:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017539C;
    }
}

loc_80175394:
{
    r3 = 1;
    goto loc_80175400;
}

loc_8017539C:
{
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801753A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801753B0;
    }
}

loc_801753A8:
{
    r3 = 0;
    goto loc_80175400;
}

loc_801753B0:
{
    r31 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801753B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801753C4;
    }
}

loc_801753BC:
{
    r3 = 1;
    goto loc_80175400;
}

loc_801753C4:
{
    r3 = r31;
    // inline leaf 0x80175414 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r3 = (r0 & 1);
    // end of inlined leaf 0x80175414
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801753D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801753DC;
    }
}

loc_801753D4:
{
    r3 = 0;
    goto loc_80175400;
}

loc_801753DC:
{
    r3 = r31;
    // inline leaf 0x80175420 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x80175420
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801753E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801753F4;
    }
}

loc_801753EC:
{
    r3 = 1;
    goto loc_80175400;
}

loc_801753F4:
{
    r3 = r31;
    // inline leaf 0x80175420 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x80175420
    ctx->lr = 0x80175400u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80175314u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80175400:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800007FB gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80175314 func_80175314 preserves=true fpr_mask=0x00000000
