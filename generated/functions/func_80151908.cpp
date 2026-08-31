#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80151908(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80151908;

loc_80151908:
{
    r0 = MemoryInline::FlatRead8((r3 + 36));
    r5 = 0;
}

loc_80151914:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80151948;
    }
}

loc_80151918:
{
    r4 = MemoryInline::FlatRead32((r3 + 108));
}

loc_80151920:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80151948;
    }
}

loc_80151924:
{
    r0 = MemoryInline::FlatRead8((r4 + 113));
}

loc_8015192C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80151948;
    }
}

loc_80151930:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_80151938:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8000))) {
        goto loc_80151948;
    }
}

loc_8015193C:
{
    r0 = MemoryInline::FlatRead16((r3 + 32));
}

loc_80151944:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(16))) {
        goto loc_8015194C;
    }
}

loc_80151948:
{
    r5 = 1;
}

loc_8015194C:
{
    r0 = MemoryInline::FlatRead8((r3 + 37));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80151954:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80151960;
    }
}

loc_80151958:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80151960:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80151964:
{
    MemoryInline::FlatWrite8((r3 + 37), static_cast<uint8_t>(r5));
    r3 = 196608;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80151970:
{
    r3 = 65536;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80151908 func_80151908 preserves=true fpr_mask=0x00000000
