#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059C888(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059C888;

loc_8059C888:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 96);
}

loc_8059C8B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8059C8DC;
    }
}

loc_8059C8B4:
{
    // inline leaf 0x8059081C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 8);
    // end of inlined leaf 0x8059081C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    r0 = 4;
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    r5 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
    MemoryInline::FlatWrite16((r31 + 24), static_cast<uint16_t>(r0));
}

loc_8059C8DC:
{
}

loc_8059C8E0:
{
    r3 = 0;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8059C8F4;
    }
}

loc_8059C8E8:
{
    r0 = MemoryInline::FlatRead16((r31 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8059C8F0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8059C91C;
    }
}

loc_8059C8F4:
{
    r4 = MemoryInline::FlatRead16((r31 + 22));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r31 + 22), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8059C908:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(120))) {
        goto loc_8059C924;
    }
}

loc_8059C90C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 22), static_cast<uint16_t>(r0));
    r3 = 1;
    goto loc_8059C924;
}

loc_8059C91C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 22), static_cast<uint16_t>(r0));
}

loc_8059C924:
{
    r4 = MemoryInline::FlatRead16((r31 + 24));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r31 + 24), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8059C940;
    }
}

loc_8059C938:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 24), static_cast<uint16_t>(r0));
}

loc_8059C940:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8059C888 func_8059C888 preserves=true fpr_mask=0x00000000
