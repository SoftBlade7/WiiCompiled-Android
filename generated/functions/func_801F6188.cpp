#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F6188(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F6188;

loc_801F6188:
{
    r7 = 0;
    r6 = -1;
    goto loc_801F6214;
}

loc_801F6194:
{
}

loc_801F6198:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801F6214;
    }
}

loc_801F619C:
{
    r0 = MemoryInline::FlatRead16(r8);
    MemoryInline::FlatWrite32((r8 + 12), r7);
    r0 = (r0 & 65532);
    MemoryInline::FlatWrite32((r8 + 16), r7);
    MemoryInline::FlatWrite16(r8, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r8 + 24), r6);
    MemoryInline::FlatWrite32((r8 + 28), r7);
    r4 = MemoryInline::FlatRead32((r3 + 5596));
}

loc_801F61C0:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r4))) {
        goto loc_801F61D0;
    }
}

loc_801F61C4:
{
    r0 = MemoryInline::FlatRead32((r8 + 32));
    MemoryInline::FlatWrite32((r3 + 5596), r0);
    goto loc_801F6214;
}

loc_801F61D0:
{
    r0 = MemoryInline::FlatRead32((r4 + 36));
}

loc_801F61D8:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r0))) {
        goto loc_801F6214;
    }
}

loc_801F61DC:
{
    r0 = MemoryInline::FlatRead32((r8 + 32));
    r4 = MemoryInline::FlatRead32((r8 + 36));
    MemoryInline::FlatWrite32((r4 + 32), r0);
    r0 = MemoryInline::FlatRead32((r8 + 36));
    r4 = MemoryInline::FlatRead32((r8 + 32));
    MemoryInline::FlatWrite32((r4 + 36), r0);
    r5 = MemoryInline::FlatRead32((r3 + 5596));
    MemoryInline::FlatWrite32((r8 + 32), r5);
    r4 = MemoryInline::FlatRead32((r3 + 5596));
    r0 = MemoryInline::FlatRead32((r4 + 36));
    MemoryInline::FlatWrite32((r8 + 36), r0);
    MemoryInline::FlatWrite32((r5 + 36), r8);
    r4 = MemoryInline::FlatRead32((r8 + 36));
    MemoryInline::FlatWrite32((r4 + 32), r8);
}

loc_801F6214:
{
    r8 = MemoryInline::FlatRead32((r3 + 5596));
    r0 = MemoryInline::FlatRead16(r8);
    r0 = (r0 & 1);
}

loc_801F6220:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F6194;
    }
}

loc_801F6224:
{
    r7 = 0;
    r6 = -1;
    goto loc_801F62B0;
}

loc_801F6230:
{
}

loc_801F6234:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801F62B0;
    }
}

loc_801F6238:
{
    r0 = MemoryInline::FlatRead16(r8);
    MemoryInline::FlatWrite32((r8 + 12), r7);
    r0 = (r0 & 65532);
    MemoryInline::FlatWrite32((r8 + 16), r7);
    MemoryInline::FlatWrite16(r8, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r8 + 24), r6);
    MemoryInline::FlatWrite32((r8 + 28), r7);
    r4 = MemoryInline::FlatRead32((r3 + 5600));
}

loc_801F625C:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r4))) {
        goto loc_801F626C;
    }
}

loc_801F6260:
{
    r0 = MemoryInline::FlatRead32((r8 + 32));
    MemoryInline::FlatWrite32((r3 + 5600), r0);
    goto loc_801F62B0;
}

loc_801F626C:
{
    r0 = MemoryInline::FlatRead32((r4 + 36));
}

loc_801F6274:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r0))) {
        goto loc_801F62B0;
    }
}

loc_801F6278:
{
    r0 = MemoryInline::FlatRead32((r8 + 32));
    r4 = MemoryInline::FlatRead32((r8 + 36));
    MemoryInline::FlatWrite32((r4 + 32), r0);
    r0 = MemoryInline::FlatRead32((r8 + 36));
    r4 = MemoryInline::FlatRead32((r8 + 32));
    MemoryInline::FlatWrite32((r4 + 36), r0);
    r5 = MemoryInline::FlatRead32((r3 + 5600));
    MemoryInline::FlatWrite32((r8 + 32), r5);
    r4 = MemoryInline::FlatRead32((r3 + 5600));
    r0 = MemoryInline::FlatRead32((r4 + 36));
    MemoryInline::FlatWrite32((r8 + 36), r0);
    MemoryInline::FlatWrite32((r5 + 36), r8);
    r4 = MemoryInline::FlatRead32((r8 + 36));
    MemoryInline::FlatWrite32((r4 + 32), r8);
}

loc_801F62B0:
{
    r8 = MemoryInline::FlatRead32((r3 + 5600));
    r0 = MemoryInline::FlatRead16(r8);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F62BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F6230;
    }
}

loc_801F62C0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F6188 func_801F6188 preserves=true fpr_mask=0x00000000
