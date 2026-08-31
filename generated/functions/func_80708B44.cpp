#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80708B44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80708B44;

loc_80708B44:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(7));
}

loc_80708B48:
{
    r6 = r3;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80708B50:
{
    r0 = MemoryInline::FlatRead8((r3 + 224));
}

loc_80708B58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80708B70;
    }
}

loc_80708B5C:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 9900));
    r0 = (r5 + -50);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80708B6C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80708B70:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 10232));
    r0 = MemoryInline::FlatRead8((r5 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80708B80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80708B84:
{
    MemoryInline::FlatWrite8((r3 + 178), static_cast<uint8_t>(r4));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r6 + 179));
    r4 = (r4 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 10408));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r6 = MemoryInline::FlatRead32((r6 + 220));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80719044u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80708B44 func_80708B44 preserves=true fpr_mask=0x00000000
