#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80064450(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80064450;

loc_80064450:
{
    r0 = (r3 & 1);
}

loc_80064454:
{
    r4 = 0x802C0000u;
    r4 = (r4 + -32704);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80064470;
    }
}

loc_80064460:
{
    r5 = (r4 + 128);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r5 + 256), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
}

loc_80064470:
{
    r0 = (r3 & 2);
}

loc_80064474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80064484;
    }
}

loc_80064478:
{
    r5 = (r4 + 416);
    r0 = 0;
    MemoryInline::FlatWriteRam16((r5 + 96), static_cast<uint16_t>(r0));
}

loc_80064484:
{
    r0 = (r3 & 4);
}

loc_80064488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80064498;
    }
}

loc_8006448C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    MemoryInline::FlatWrite32((r13 + -27316), r0);
}

loc_80064498:
{
    r0 = (r3 & 8);
}

loc_8006449C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800644C8;
    }
}

loc_800644A0:
{
    r5 = (r4 + 0);
    r6 = 0;
    r7 = 1;
    r0 = 2;
    MemoryInline::FlatWriteRam8(r4, static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r5 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r5 + 2), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r5 + 3), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam32((r5 + 4), r0);
    MemoryInline::FlatWriteRam32((r5 + 8), r6);
}

loc_800644C8:
{
    r0 = (r3 & 16);
}

loc_800644CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800644E4;
    }
}

loc_800644D0:
{
    r5 = (r4 + 516);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r5 + 8), r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r0);
    MemoryInline::FlatWriteRam32((r4 + 516), r0);
}

loc_800644E4:
{
    r0 = (r3 & 32);
}

loc_800644E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800644F4;
    }
}

loc_800644EC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -27324), static_cast<uint8_t>(r0));
}

loc_800644F4:
{
    r0 = (r3 & 64);
}

loc_800644F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80064504;
    }
}

loc_800644FC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -27320), r0);
}

loc_80064504:
{
    r0 = (r3 & 128);
}

loc_80064508:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80064518;
    }
}

loc_8006450C:
{
    r0 = MemoryInline::FlatRead32((r13 + -27304));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r13 + -27304), r0);
}

loc_80064518:
{
    r0 = (r3 & 256);
}

loc_8006451C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80064528;
    }
}

loc_80064520:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r4 + 2624), r0);
}

loc_80064528:
{
    r0 = (r3 & 512);
}

loc_8006452C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80064570;
    }
}

loc_80064530:
{
    r5 = (r4 + 4168);
    r6 = -1;
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 16), 0, 28u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r5 + 16), r6);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 28), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 32), r0);
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r5 + 43), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r5 + 42), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r5 + 41), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r5 + 40), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r5 + 39), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r5 + 38), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r5 + 37), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r5 + 36), static_cast<uint8_t>(r6));
}

loc_80064570:
{
    r0 = (r3 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80064574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006458C;
    }
}

loc_80064578:
{
    r3 = (r4 + 560);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r4 + 560), r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
}

loc_8006458C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27328), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80064450 func_80064450 preserves=true fpr_mask=0x00000000
