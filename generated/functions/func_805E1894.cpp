#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E1894(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E1894;

loc_805E1894:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -256), 0, 264u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r1 + 260), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r1 + 232), r26);
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r1 + 236), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r1 + 240), r28);
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r1 + 244), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r1 + 248), r30);
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r1 + 252), r31);
    }
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r3 = (r1 + 8);
    ctx->lr = 0x805E18B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C398u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = MemoryInline::FlatRead32((r26 + 100));
    r31 = -1;
    r29 = 0;
    goto loc_805E1924;
}

loc_805E18C8:
{
    r3 = r30;
    r4 = (r29 & 65535);
    // inline leaf 0x8051D084 (14 guest instruction(s))
}

loc_inl0_0x8051D084:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_inl0_0x8051D08C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8051D098;
    }
}

loc_inl0_0x8051D090:
{
    r3 = 0;
    goto loc_inl0_cont_8051D084;
}

loc_inl0_0x8051D098:
{
    r4 = (r4 * 216);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_inl0_0x8051D0A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8051D0B4;
    }
}

loc_inl0_0x8051D0AC:
{
    r3 = (r3 + r4);
    goto loc_inl0_cont_8051D084;
}

loc_inl0_0x8051D0B4:
{
    r3 = 0;
}

loc_inl0_cont_8051D084:
{
    // end of inlined leaf 0x8051D084
}

loc_805E18D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805E18E8;
    }
}

loc_805E18DC:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_805E18E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E18F8;
    }
}

loc_805E18E8:
{
}

loc_805E18EC:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(0))) {
        goto loc_805E1920;
    }
}

loc_805E18F0:
{
    r31 = r29;
    goto loc_805E1920;
}

loc_805E18F8:
{
    r4 = MemoryInline::FlatRead32((r3 + 196));
    r0 = MemoryInline::FlatRead32((r1 + 204));
}

loc_805E1904:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_805E1920;
    }
}

loc_805E1908:
{
    r3 = MemoryInline::FlatRead32((r3 + 184));
    r0 = MemoryInline::FlatRead32((r1 + 192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_805E1914:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E1920;
    }
}

loc_805E1918:
{
    r31 = r29;
    goto loc_805E1930;
}

loc_805E1920:
{
    r29 = (r29 + 1);
}

loc_805E1924:
{
    r0 = MemoryInline::FlatRead16((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_805E192C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805E18C8;
    }
}

loc_805E1930:
{
    r3 = r30;
    r5 = r27;
    r4 = (r31 & 65535);
    ctx->lr = 0x805E1940u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051D0BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r5 = (r31 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r6 = (r1 + 8);
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80621484u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r26 + r31);
    r4 = 0x80520000u;
    MemoryInline::FlatWrite8((r3 + 116), static_cast<uint8_t>(r28));
    r0 = 2;
    r3 = (r1 + 112);
    r4 = (r4 + -15564);
    MemoryInline::FlatWrite32((r26 + 148), r0);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x805E1984u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r26 = MemoryInline::FlatRead32((r1 + 232));
    r27 = MemoryInline::FlatRead32((r1 + 236));
    r28 = MemoryInline::FlatRead32((r1 + 240));
    r29 = MemoryInline::FlatRead32((r1 + 244));
    r30 = MemoryInline::FlatRead32((r1 + 248));
    r31 = MemoryInline::FlatRead32((r1 + 252));
    r0 = MemoryInline::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805E1894 func_805E1894 preserves=true fpr_mask=0x00000000
