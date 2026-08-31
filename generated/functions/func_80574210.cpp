#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80574210(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80574210;

loc_80574210:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80574234:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805742E0;
    }
}

loc_80574238:
{
    // inline leaf 0x80591468 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 64));
    r3 = MemoryInline::FlatRead32((r3 + 100));
    // end of inlined leaf 0x80591468
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_1 & 1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(22));
    r3 = (r3_rot_1 & 1);
}

loc_80574250:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_805742AC;
    }
}

loc_80574254:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 32768);
}

loc_80574264:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805742AC;
    }
}

loc_80574268:
{
    r3 = r31;
    // inline leaf 0x8059144C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x8059144C
    r3 = MemoryInline::FlatRead8((r3 + 161));
    MemoryInline::FlatWrite8((r31 + 122), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_8057427C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80574288;
    }
}

loc_80574280:
{
    r3 = 1;
    goto loc_80574294;
}

loc_80574288:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_8057428C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80574294;
    }
}

loc_80574290:
{
    r3 = 4;
}

loc_80574294:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r31 + 122), static_cast<uint8_t>(r3));
    r4 = MemoryInline::FlatRead32((r31 + 76));
    r3 = r31;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->lr = 0x805742ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80574E60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805742AC:
{
    r4 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
}

loc_805742BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805742E0;
    }
}

loc_805742C0:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805742CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805742E0;
    }
}

loc_805742D0:
{
    r3 = r31;
    // inline leaf 0x805907A0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x805907A0
    r4 = 3;
    ctx->lr = 0x805742E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80865050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805742E0:
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80574210 func_80574210 preserves=true fpr_mask=0x00000000
