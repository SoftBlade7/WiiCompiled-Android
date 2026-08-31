#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002001C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8002001C;

loc_8002001C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = (r3 + 25744);
    r0 = MemoryInline::FlatRead32((r3 + 156));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80020038:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80020048;
    }
}

loc_8002003C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 156), r0);
    goto loc_800200C4;
}

loc_80020048:
{
    r3 = 0x802A0000u;
    r3 = (r3 + 25912);
    r0 = MemoryInline::FlatRead32((r3 + 760));
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1792));
}

loc_8002005C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80020068;
    }
}

loc_80020060:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3328));
}

loc_80020064:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800200B0;
    }
}

loc_80020068:
{
    r3 = 0x802A0000u;
    r0 = 4;
    r3 = (r3 + 25912);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead32((r3 + 128));
    r3 = (r1 + 12);
    r5 = (r1 + 8);
    r6 = 0;
    r7 = 1;
    ctx->lr = 0x80020090u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001F794u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r3 + -266338304);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_8002009C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800200A8;
    }
}

loc_800200A0:
{
    r4 = 5;
    goto loc_800200B4;
}

loc_800200A8:
{
    r4 = 3;
    goto loc_800200B4;
}

loc_800200B0:
{
    r4 = 4;
}

loc_800200B4:
{
    r3 = (r1 + 16);
    // inline leaf 0x8001EC84 (6 guest instruction(s))
    r5 = 0;
    r0 = -1;
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r5);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x8001EC84
    r3 = (r1 + 16);
    ctx->lr = 0x800200C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001EBB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800200C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8002001C func_8002001C preserves=true fpr_mask=0x00000000
