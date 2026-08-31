#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EEBCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805EEBCC;

loc_805EEBCC:
{
    r7 = 0;
    r6 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r7));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EEBE4;
    }
}

loc_805EEBE0:
{
    r7 = 1;
}

loc_805EEBE4:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EEBF8;
    }
}

loc_805EEBF4:
{
    r7 = (r7 + 1);
}

loc_805EEBF8:
{
    r0 = 2;
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EEC0C;
    }
}

loc_805EEC08:
{
    r7 = (r7 + 1);
}

loc_805EEC0C:
{
    r0 = 3;
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EEC20;
    }
}

loc_805EEC1C:
{
    r7 = (r7 + 1);
}

loc_805EEC20:
{
    r0 = 4;
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EEC34;
    }
}

loc_805EEC30:
{
    r7 = (r7 + 1);
}

loc_805EEC34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_805EEC38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805EEC40;
    }
}

loc_805EEC3C:
{
    r5 = 1;
}

loc_805EEC40:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000000E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805EEBCC func_805EEBCC preserves=true fpr_mask=0x00000000
